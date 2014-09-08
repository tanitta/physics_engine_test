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
		class PhysicsEntityState {
			public:
				PhysicsEntityState(){};
				virtual ~PhysicsEntityState(){};
		};

	} // namespace entity
} // namespace physics_engine
