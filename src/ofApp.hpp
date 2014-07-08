#pragma once

#include "ofMain.h"
#include <boost/numeric/ublas/matrix.hpp>         // (1) 普通の行列用のヘッダ
#include <boost/numeric/ublas/triangular.hpp>     // (2) 三角行列用のヘッダ
#include <boost/numeric/ublas/symmetric.hpp>      // (3) 対称行列用のヘッダ
#include <boost/numeric/ublas/hermitian.hpp>      // (4) エルミート行列用のヘッダ
#include <boost/numeric/ublas/matrix_sparse.hpp>  // (5) 疎行列用のヘッダ
#include <boost/numeric/ublas/vector.hpp>         // (6) ベクトル用のヘッダ
#include <boost/numeric/ublas/vector_sparse.hpp>  // (7) 疎ベクトル用のヘッダ
using namespace boost::numeric;         // boost::numeric

class ofApp : public ofBaseApp{
	public:
		ublas::matrix<double> mat_d;
		ofApp():mat_d(3,4){};
		~ofApp(){};
		
		void setup(){};
		void update(){};
		void draw(){};

		void keyPressed(int key){};
		void keyReleased(int key){};
		void mouseMoved(int x, int y ){};
		void mouseDragged(int x, int y, int button){};
		void mousePressed(int x, int y, int button){};
		void mouseReleased(int x, int y, int button){};
		void windowResized(int w, int h){};
		void dragEvent(ofDragInfo dragInfo){};
		void gotMessage(ofMessage msg){};
		
};
