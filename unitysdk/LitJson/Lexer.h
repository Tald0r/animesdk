#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace LitJson { class FsmContext; }
namespace LitJson { class Lexer_StateHandler; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::IO { class TextReader; }
namespace System::Text { class StringBuilder; }

#define LITJSON_LEXER_GETCHAR_OFFSET UNITYSDK_OFFSET(0x199A6260)
#define LITJSON_LEXER_GET_ALLOWCOMMENTS_OFFSET UNITYSDK_OFFSET(0x199A5320)
#define LITJSON_LEXER_GET_ALLOWSINGLEQUOTEDSTRINGS_OFFSET UNITYSDK_OFFSET(0x199A5340)
#define LITJSON_LEXER_GET_COMMENTSTACK_OFFSET UNITYSDK_OFFSET(0x199A5390)
#define LITJSON_LEXER_GET_ENDOFINPUT_OFFSET UNITYSDK_OFFSET(0x199A5360)
#define LITJSON_LEXER_GET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x199A5380)
#define LITJSON_LEXER_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x199A5370)
#define LITJSON_LEXER_HEXVALUE_OFFSET UNITYSDK_OFFSET(0x199A5E50)
#define LITJSON_LEXER_NEXTCHAR_OFFSET UNITYSDK_OFFSET(0x199A7DD0)
#define LITJSON_LEXER_NEXTTOKEN_OFFSET UNITYSDK_OFFSET(0x199A7E10)
#define LITJSON_LEXER_POPULATEFSMTABLES_OFFSET UNITYSDK_OFFSET(0x199A53C0)
#define LITJSON_LEXER_PROCESSESCCHAR_OFFSET UNITYSDK_OFFSET(0x199A5F30)
#define LITJSON_LEXER_SET_ALLOWCOMMENTS_OFFSET UNITYSDK_OFFSET(0x199A5330)
#define LITJSON_LEXER_SET_ALLOWSINGLEQUOTEDSTRINGS_OFFSET UNITYSDK_OFFSET(0x199A5350)
#define LITJSON_LEXER_STATE10_OFFSET UNITYSDK_OFFSET(0x199A6A90)
#define LITJSON_LEXER_STATE11_OFFSET UNITYSDK_OFFSET(0x199A6B20)
#define LITJSON_LEXER_STATE12_OFFSET UNITYSDK_OFFSET(0x199A6BB0)
#define LITJSON_LEXER_STATE13_OFFSET UNITYSDK_OFFSET(0x199A6C40)
#define LITJSON_LEXER_STATE14_OFFSET UNITYSDK_OFFSET(0x199A6CD0)
#define LITJSON_LEXER_STATE15_OFFSET UNITYSDK_OFFSET(0x199A6D60)
#define LITJSON_LEXER_STATE16_OFFSET UNITYSDK_OFFSET(0x199A6DF0)
#define LITJSON_LEXER_STATE17_OFFSET UNITYSDK_OFFSET(0x199A6E80)
#define LITJSON_LEXER_STATE18_OFFSET UNITYSDK_OFFSET(0x199A6F10)
#define LITJSON_LEXER_STATE19_OFFSET UNITYSDK_OFFSET(0x199A6FA0)
#define LITJSON_LEXER_STATE1_OFFSET UNITYSDK_OFFSET(0x199A5FD0)
#define LITJSON_LEXER_STATE20_OFFSET UNITYSDK_OFFSET(0x199A7080)
#define LITJSON_LEXER_STATE21_OFFSET UNITYSDK_OFFSET(0x199A7110)
#define LITJSON_LEXER_STATE22_OFFSET UNITYSDK_OFFSET(0x199A72D0)
#define LITJSON_LEXER_STATE23_OFFSET UNITYSDK_OFFSET(0x199A7970)
#define LITJSON_LEXER_STATE24_OFFSET UNITYSDK_OFFSET(0x199A7A50)
#define LITJSON_LEXER_STATE25_OFFSET UNITYSDK_OFFSET(0x199A7AF0)
#define LITJSON_LEXER_STATE26_OFFSET UNITYSDK_OFFSET(0x199A7B90)
#define LITJSON_LEXER_STATE27_OFFSET UNITYSDK_OFFSET(0x199A7C50)
#define LITJSON_LEXER_STATE28_OFFSET UNITYSDK_OFFSET(0x199A7D10)
#define LITJSON_LEXER_STATE2_OFFSET UNITYSDK_OFFSET(0x199A62C0)
#define LITJSON_LEXER_STATE3_OFFSET UNITYSDK_OFFSET(0x199A6390)
#define LITJSON_LEXER_STATE4_OFFSET UNITYSDK_OFFSET(0x199A6580)
#define LITJSON_LEXER_STATE5_OFFSET UNITYSDK_OFFSET(0x199A6690)
#define LITJSON_LEXER_STATE6_OFFSET UNITYSDK_OFFSET(0x199A6730)
#define LITJSON_LEXER_STATE7_OFFSET UNITYSDK_OFFSET(0x199A6850)
#define LITJSON_LEXER_STATE8_OFFSET UNITYSDK_OFFSET(0x199A6910)
#define LITJSON_LEXER_STATE9_OFFSET UNITYSDK_OFFSET(0x199A6A00)
#define LITJSON_LEXER_UNGETCHAR_OFFSET UNITYSDK_OFFSET(0x199A6570)
#define LITJSON_LEXER__CCTOR_OFFSET UNITYSDK_OFFSET(0x199A53A0)
#define LITJSON_LEXER__CTOR_OFFSET UNITYSDK_OFFSET(0x199A5C30)

namespace LitJson
{
	inline static constexpr unsigned int Lexer_TypeDefinitionIndex = 7794;

	class Lexer : public ::System::Object
	{
	public:
		static ::Il2CppArray<::LitJson::Lexer_StateHandler*>** StaticGet_fsm_handler_table()
		{
			return (::Il2CppArray<::LitJson::Lexer_StateHandler*>**)Il2CppClass::FromTypeDefinitionIndex(Lexer_TypeDefinitionIndex)->GetStaticField(0x6D20);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_fsm_return_table()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Lexer_TypeDefinitionIndex)->GetStaticField(0x6D28);
		}
		::LitJson::FsmContext* fsm_context; // 0x10
		::System::Text::StringBuilder* curr_comment; // 0x18
		::System::Collections::Generic::Stack_1<::System::String*>* _CommentStack_k__BackingField; // 0x20
		::System::IO::TextReader* reader; // 0x28
		::System::String* string_value; // 0x30
		::System::String* comment; // 0x38
		::System::Text::StringBuilder* string_buffer; // 0x40
		::System::Int32 input_buffer; // 0x48
		::System::Int32 unichar; // 0x4C
		::System::Int32 token; // 0x50
		::System::Int32 input_char; // 0x54
		::System::Int32 state; // 0x58
		::System::Boolean allow_single_quoted_strings; // 0x5C
		::System::Boolean allow_comments; // 0x5D
		::System::Boolean end_of_input; // 0x5E

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LITJSON_LEXER__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::IO::TextReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextReader*))((::PBYTE)hIl2Cpp + LITJSON_LEXER__CTOR_OFFSET))(this, reader);
		}

		::System::Boolean get_AllowComments()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_LEXER_GET_ALLOWCOMMENTS_OFFSET))(this);
		}

		::System::Void set_AllowComments(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_LEXER_SET_ALLOWCOMMENTS_OFFSET))(this, value);
		}

		::System::Boolean get_AllowSingleQuotedStrings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_LEXER_GET_ALLOWSINGLEQUOTEDSTRINGS_OFFSET))(this);
		}

		::System::Void set_AllowSingleQuotedStrings(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_LEXER_SET_ALLOWSINGLEQUOTEDSTRINGS_OFFSET))(this, value);
		}

		::System::Boolean get_EndOfInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_LEXER_GET_ENDOFINPUT_OFFSET))(this);
		}

		::System::Int32 get_Token()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_LEXER_GET_TOKEN_OFFSET))(this);
		}

		::System::String* get_StringValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_LEXER_GET_STRINGVALUE_OFFSET))(this);
		}

		::System::Collections::Generic::Stack_1<::System::String*>* get_CommentStack()
		{
			return ((::System::Collections::Generic::Stack_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_LEXER_GET_COMMENTSTACK_OFFSET))(this);
		}

		static ::System::Int32 HexValue(::System::Int32 digit)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + LITJSON_LEXER_HEXVALUE_OFFSET))(digit);
		}

		static ::System::Void PopulateFsmTables(::Il2CppArray<::LitJson::Lexer_StateHandler*>*& fsm_handler_table, ::Il2CppArray<::System::Int32>*& fsm_return_table)
		{
			return ((::System::Void(*)(::Il2CppArray<::LitJson::Lexer_StateHandler*>*&, ::Il2CppArray<::System::Int32>*&))((::PBYTE)hIl2Cpp + LITJSON_LEXER_POPULATEFSMTABLES_OFFSET))(fsm_handler_table, fsm_return_table);
		}

		static ::System::Char ProcessEscChar(::System::Int32 esc_char)
		{
			return ((::System::Char(*)(::System::Int32))((::PBYTE)hIl2Cpp + LITJSON_LEXER_PROCESSESCCHAR_OFFSET))(esc_char);
		}

		static ::System::Boolean State1(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE1_OFFSET))(ctx);
		}

		static ::System::Boolean State2(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE2_OFFSET))(ctx);
		}

		static ::System::Boolean State3(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE3_OFFSET))(ctx);
		}

		static ::System::Boolean State4(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE4_OFFSET))(ctx);
		}

		static ::System::Boolean State5(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE5_OFFSET))(ctx);
		}

		static ::System::Boolean State6(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE6_OFFSET))(ctx);
		}

		static ::System::Boolean State7(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE7_OFFSET))(ctx);
		}

		static ::System::Boolean State8(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE8_OFFSET))(ctx);
		}

		static ::System::Boolean State9(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE9_OFFSET))(ctx);
		}

		static ::System::Boolean State10(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE10_OFFSET))(ctx);
		}

		static ::System::Boolean State11(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE11_OFFSET))(ctx);
		}

		static ::System::Boolean State12(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE12_OFFSET))(ctx);
		}

		static ::System::Boolean State13(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE13_OFFSET))(ctx);
		}

		static ::System::Boolean State14(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE14_OFFSET))(ctx);
		}

		static ::System::Boolean State15(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE15_OFFSET))(ctx);
		}

		static ::System::Boolean State16(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE16_OFFSET))(ctx);
		}

		static ::System::Boolean State17(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE17_OFFSET))(ctx);
		}

		static ::System::Boolean State18(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE18_OFFSET))(ctx);
		}

		static ::System::Boolean State19(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE19_OFFSET))(ctx);
		}

		static ::System::Boolean State20(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE20_OFFSET))(ctx);
		}

		static ::System::Boolean State21(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE21_OFFSET))(ctx);
		}

		static ::System::Boolean State22(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE22_OFFSET))(ctx);
		}

		static ::System::Boolean State23(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE23_OFFSET))(ctx);
		}

		static ::System::Boolean State24(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE24_OFFSET))(ctx);
		}

		static ::System::Boolean State25(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE25_OFFSET))(ctx);
		}

		static ::System::Boolean State26(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE26_OFFSET))(ctx);
		}

		static ::System::Boolean State27(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE27_OFFSET))(ctx);
		}

		static ::System::Boolean State28(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATE28_OFFSET))(ctx);
		}

		::System::Boolean GetChar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_LEXER_GETCHAR_OFFSET))(this);
		}

		::System::Int32 NextChar()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_LEXER_NEXTCHAR_OFFSET))(this);
		}

		::System::Boolean NextToken(::System::Boolean dropComment, ::System::Boolean& hasComment)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean&))((::PBYTE)hIl2Cpp + LITJSON_LEXER_NEXTTOKEN_OFFSET))(this, dropComment, hasComment);
		}

		::System::Void UngetChar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_LEXER_UNGETCHAR_OFFSET))(this);
		}
	};
}
