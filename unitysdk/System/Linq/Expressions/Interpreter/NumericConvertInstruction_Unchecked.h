#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/NumericConvertInstruction.h"
#include "unitysdk/System/TypeCode.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_UNCHECKED_CONVERTDOUBLE_OFFSET UNITYSDK_OFFSET(0x19746A40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_UNCHECKED_CONVERTINT32_OFFSET UNITYSDK_OFFSET(0x19746410)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_UNCHECKED_CONVERTINT64_OFFSET UNITYSDK_OFFSET(0x19746620)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_UNCHECKED_CONVERTUINT64_OFFSET UNITYSDK_OFFSET(0x19746820)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_UNCHECKED_CONVERT_OFFSET UNITYSDK_OFFSET(0x19745E20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_UNCHECKED_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x19745DD0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_UNCHECKED__CTOR_OFFSET UNITYSDK_OFFSET(0x19745E10)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NumericConvertInstruction_Unchecked_TypeDefinitionIndex = 4868;

	class NumericConvertInstruction_Unchecked : public ::System::Linq::Expressions::Interpreter::NumericConvertInstruction
	{
	public:
		::System::Void _ctor(::System::TypeCode from, ::System::TypeCode to, ::System::Boolean isLiftedToNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::TypeCode, ::System::TypeCode, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_UNCHECKED__CTOR_OFFSET))(this, from, to, isLiftedToNull);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_UNCHECKED_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		::System::Object* Convert(::System::Object* obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_UNCHECKED_CONVERT_OFFSET))(this, obj);
		}

		::System::Object* ConvertInt32(::System::Int32 obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_UNCHECKED_CONVERTINT32_OFFSET))(this, obj);
		}

		::System::Object* ConvertInt64(::System::Int64 obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_UNCHECKED_CONVERTINT64_OFFSET))(this, obj);
		}

		::System::Object* ConvertUInt64(::System::UInt64 obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_UNCHECKED_CONVERTUINT64_OFFSET))(this, obj);
		}

		::System::Object* ConvertDouble(::System::Double obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NUMERICCONVERTINSTRUCTION_UNCHECKED_CONVERTDOUBLE_OFFSET))(this, obj);
		}
	};
}
