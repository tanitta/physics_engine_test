#include <boost/numeric/ublas/matrix.hpp>
namespace physics_engine_test {
	class physics_entity {
		private:
			boost::numeric::ublas::vector<double> vecA;
		public:
			physics_entity():vecA(3,1){};
			virtual ~physics_entity(){};
	};
} // namespace physics_engine_test
