/*
 * main.c
 *
 *  Created on: 7/3/2015
 *      Author: Carnage
 */
#include <stdio.h>
#include <michelle.h>
#include <mruby.h>
#include <mruby/compile.h>
#include <mruby/class.h>
#include <michelle_windows.h>



int main(int argc, char** argv) {
create_windows();

//	mrb_state* mruby = mrb_open();
//	struct RClass* m_michelle= mrb_define_module(mruby, "Michelle");
//	mrb_load_string(mruby, "print \"hola desde ruby\"");
	return 0;
}

//struct RClass* get_michelle() {
//
//	return m_michelle;
//
//}
