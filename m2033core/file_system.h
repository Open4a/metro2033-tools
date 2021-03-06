/******************************************************************************
This source file is part of metro2033-tools
For the latest info, see http://code.google.com/p/metro2033-tools/

Copyright (c) 2010-2011 Ivan Shishkin <codingdude@gmail.com>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
******************************************************************************/

#ifndef __M2033_FILE_SYSTEM_H__
#define __M2033_FILE_SYSTEM_H__

#include "prerequisites.h"

namespace m2033
{
	class file_system
	{
	public:
		enum
		{
			ROOT,
			MESHES,
			TEXTURES,
		};

		reader_ptr open_reader( const std::string& name );

		inline void set_root_dir( const std::string& root ) { root_ = root; }
		inline const std::string& get_root_dir() { return root_; }

		bool set_root_from_fname( const std::string& file );
		std::string get_full_path( int path_id, const std::string& filename );

		bool file_exists( const std::string &path );

	private:
		static std::string root_;
	};
}

#endif // __M2033_FILE_SYSTEM_H__