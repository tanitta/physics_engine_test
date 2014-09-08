#pragma once

#include <boost/numeric/ublas/matrix.hpp>
//rigid_body_data_struct
//
//collidable
//shape
//attibute
//state
namespace physics_engine {
	namespace entity{
		class PhysicsEntityCollidable {
			public:
				PhysicsEntityCollidable(){};
				virtual ~PhysicsEntityCollidable(){};
		};

		class PhysicsEntityShape {
			public:
				PhysicsEntityShape(){};
				virtual ~PhysicsEntityShape(){};
		};

		class PhysicsEntityAttibute {
			public:
				PhysicsEntityAttibute(){};
				virtual ~PhysicsEntityAttibute(){};
		};

		class PhysicsEntityState {
			public:
				PhysicsEntityState(){};
				virtual ~PhysicsEntityState(){};
		};

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
