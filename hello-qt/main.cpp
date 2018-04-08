#include <QDebug>

#include <emscripten/bind.h>


using namespace emscripten;

void sayHello() {
    qDebug() << "hello beautiful world!!!!!" << endl << endl;
}

EMSCRIPTEN_BINDINGS(my_module) {
    function("sayHello", &sayHello);
}
class Talker {
public:
    void talk() { sayHello(); }
};

EMSCRIPTEN_BINDINGS(my_class_example) {
  class_<Talker>("Talker")
    .constructor()
    .function("talk", &Talker::talk)
    ;
}

int main(int argc, char *argv[]) {
    
    sayHello();

    return 0;

}
