#pragma once

namespace physics_engine {
	namespace entity {
		class BaseEntity {
			private:
				boost::numeric::ublas::vector<double> inertia_;
				float mass_;
				float restitution_;
				float friction_;


			public:
				BaseEntity():
					inertia_(3,1),
					mass_(1),
					restitution_(0.5),
					friction_(0.5){};
				virtual ~BaseEntity(){};
		};
	} // namespace entity
} // namespace physics_engine
