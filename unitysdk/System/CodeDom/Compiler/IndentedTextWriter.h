#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/TextWriter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class Encoding; }

#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1822C070)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1822C0A0)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x1822BFB0)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_GET_INDENT_OFFSET UNITYSDK_OFFSET(0x1822C040)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_GET_INNERWRITER_OFFSET UNITYSDK_OFFSET(0x1822C060)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_GET_NEWLINE_OFFSET UNITYSDK_OFFSET(0x1822BFE0)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_OUTPUTTABS_OFFSET UNITYSDK_OFFSET(0x1822C0D0)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_SET_INDENT_OFFSET UNITYSDK_OFFSET(0x1822C050)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_SET_NEWLINE_OFFSET UNITYSDK_OFFSET(0x1822C010)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINENOTABS_OFFSET UNITYSDK_OFFSET(0x1822C4F0)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINE_10_OFFSET UNITYSDK_OFFSET(0x1822C7E0)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINE_11_OFFSET UNITYSDK_OFFSET(0x1822C820)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINE_12_OFFSET UNITYSDK_OFFSET(0x1822C870)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINE_13_OFFSET UNITYSDK_OFFSET(0x1822C8D0)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINE_14_OFFSET UNITYSDK_OFFSET(0x1822C920)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINE_1_OFFSET UNITYSDK_OFFSET(0x1822C560)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINE_2_OFFSET UNITYSDK_OFFSET(0x1822C5A0)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINE_3_OFFSET UNITYSDK_OFFSET(0x1822C5E0)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINE_4_OFFSET UNITYSDK_OFFSET(0x1822C620)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINE_5_OFFSET UNITYSDK_OFFSET(0x1822C660)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINE_6_OFFSET UNITYSDK_OFFSET(0x1822C6C0)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINE_7_OFFSET UNITYSDK_OFFSET(0x1822C710)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINE_8_OFFSET UNITYSDK_OFFSET(0x1822C760)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINE_9_OFFSET UNITYSDK_OFFSET(0x1822C7A0)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x1822C520)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITE_10_OFFSET UNITYSDK_OFFSET(0x1822C3F0)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITE_11_OFFSET UNITYSDK_OFFSET(0x1822C440)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITE_12_OFFSET UNITYSDK_OFFSET(0x1822C4A0)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x1822C170)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITE_2_OFFSET UNITYSDK_OFFSET(0x1822C1B0)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITE_3_OFFSET UNITYSDK_OFFSET(0x1822C1F0)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITE_4_OFFSET UNITYSDK_OFFSET(0x1822C230)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITE_5_OFFSET UNITYSDK_OFFSET(0x1822C290)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITE_6_OFFSET UNITYSDK_OFFSET(0x1822C2E0)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITE_7_OFFSET UNITYSDK_OFFSET(0x1822C330)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITE_8_OFFSET UNITYSDK_OFFSET(0x1822C370)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITE_9_OFFSET UNITYSDK_OFFSET(0x1822C3B0)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x1822C130)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1822BF50)
#define SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1822BEE0)

namespace System::CodeDom::Compiler
{
	inline static constexpr unsigned int IndentedTextWriter_TypeDefinitionIndex = 3215;

	class IndentedTextWriter : public ::System::IO::TextWriter
	{
	public:
		// static const ::System::String* DefaultTabString; // 0x0
		::System::IO::TextWriter* _writer; // 0x28
		::System::String* _tabString; // 0x30
		::System::Int32 _indentLevel; // 0x38
		::System::Boolean _tabsPending; // 0x3C

		::System::Void _ctor(::System::IO::TextWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER__CTOR_OFFSET))(this, writer);
		}

		::System::Void _ctor_1(::System::IO::TextWriter* writer, ::System::String* tabString)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER__CTOR_1_OFFSET))(this, writer, tabString);
		}

		::System::Text::Encoding* get_Encoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_GET_ENCODING_OFFSET))(this);
		}

		::System::String* get_NewLine()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_GET_NEWLINE_OFFSET))(this);
		}

		::System::Void set_NewLine(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_SET_NEWLINE_OFFSET))(this, value);
		}

		::System::Int32 get_Indent()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_GET_INDENT_OFFSET))(this);
		}

		::System::Void set_Indent(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_SET_INDENT_OFFSET))(this, value);
		}

		::System::IO::TextWriter* get_InnerWriter()
		{
			return ((::System::IO::TextWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_GET_INNERWRITER_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_FLUSH_OFFSET))(this);
		}

		::System::Void OutputTabs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_OUTPUTTABS_OFFSET))(this);
		}

		::System::Void Write(::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITE_OFFSET))(this, s);
		}

		::System::Void Write_1(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITE_1_OFFSET))(this, value);
		}

		::System::Void Write_2(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITE_2_OFFSET))(this, value);
		}

		::System::Void Write_3(::Il2CppArray<::System::Char>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITE_3_OFFSET))(this, buffer);
		}

		::System::Void Write_4(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITE_4_OFFSET))(this, buffer, index, count);
		}

		::System::Void Write_5(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITE_5_OFFSET))(this, value);
		}

		::System::Void Write_6(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITE_6_OFFSET))(this, value);
		}

		::System::Void Write_7(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITE_7_OFFSET))(this, value);
		}

		::System::Void Write_8(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITE_8_OFFSET))(this, value);
		}

		::System::Void Write_9(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITE_9_OFFSET))(this, value);
		}

		::System::Void Write_10(::System::String* format, ::System::Object* arg0)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITE_10_OFFSET))(this, format, arg0);
		}

		::System::Void Write_11(::System::String* format, ::System::Object* arg0, ::System::Object* arg1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITE_11_OFFSET))(this, format, arg0, arg1);
		}

		::System::Void Write_12(::System::String* format, ::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITE_12_OFFSET))(this, format, arg);
		}

		::System::Void WriteLineNoTabs(::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINENOTABS_OFFSET))(this, s);
		}

		::System::Void WriteLine(::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINE_OFFSET))(this, s);
		}

		::System::Void WriteLine_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINE_1_OFFSET))(this);
		}

		::System::Void WriteLine_2(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINE_2_OFFSET))(this, value);
		}

		::System::Void WriteLine_3(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINE_3_OFFSET))(this, value);
		}

		::System::Void WriteLine_4(::Il2CppArray<::System::Char>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINE_4_OFFSET))(this, buffer);
		}

		::System::Void WriteLine_5(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINE_5_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteLine_6(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINE_6_OFFSET))(this, value);
		}

		::System::Void WriteLine_7(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINE_7_OFFSET))(this, value);
		}

		::System::Void WriteLine_8(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINE_8_OFFSET))(this, value);
		}

		::System::Void WriteLine_9(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINE_9_OFFSET))(this, value);
		}

		::System::Void WriteLine_10(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINE_10_OFFSET))(this, value);
		}

		::System::Void WriteLine_11(::System::String* format, ::System::Object* arg0)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINE_11_OFFSET))(this, format, arg0);
		}

		::System::Void WriteLine_12(::System::String* format, ::System::Object* arg0, ::System::Object* arg1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINE_12_OFFSET))(this, format, arg0, arg1);
		}

		::System::Void WriteLine_13(::System::String* format, ::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINE_13_OFFSET))(this, format, arg);
		}

		::System::Void WriteLine_14(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_INDENTEDTEXTWRITER_WRITELINE_14_OFFSET))(this, value);
		}
	};
}
