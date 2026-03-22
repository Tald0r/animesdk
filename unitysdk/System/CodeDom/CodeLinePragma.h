#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_CODEDOM_CODELINEPRAGMA_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x18FAC3A0)
#define SYSTEM_CODEDOM_CODELINEPRAGMA_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x18FAC420)
#define SYSTEM_CODEDOM_CODELINEPRAGMA_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x18FAC3E0)
#define SYSTEM_CODEDOM_CODELINEPRAGMA_SET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x18FAC460)
#define SYSTEM_CODEDOM_CODELINEPRAGMA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18FAC360)
#define SYSTEM_CODEDOM_CODELINEPRAGMA__CTOR_OFFSET UNITYSDK_OFFSET(0x18FAC320)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeLinePragma_TypeDefinitionIndex = 4042;

	class CodeLinePragma : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODELINEPRAGMA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* fileName, ::System::Int32 lineNumber)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODELINEPRAGMA__CTOR_1_OFFSET))(this, fileName, lineNumber);
		}

		::System::String* get_FileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODELINEPRAGMA_GET_FILENAME_OFFSET))(this);
		}

		::System::Void set_FileName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODELINEPRAGMA_SET_FILENAME_OFFSET))(this, value);
		}

		::System::Int32 get_LineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODELINEPRAGMA_GET_LINENUMBER_OFFSET))(this);
		}

		::System::Void set_LineNumber(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODELINEPRAGMA_SET_LINENUMBER_OFFSET))(this, value);
		}
	};
}
