#pragma once
#include <physics_entity.hpp>
// simulation_pipeline
//
// 1.external_force
// 2.broad_phase
// 3.detect_collision
// 4.solve_constraints
// 5.integrate

namespace physics_engine {
	class PhysicsEngine {
		public:
			PhysicsEngine(){};
			virtual ~PhysicsEngine(){};
	};
} // namespace physics
