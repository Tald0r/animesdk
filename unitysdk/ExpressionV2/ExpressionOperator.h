#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ExpressionV2/ExprValue.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EXPRESSIONV2_EXPRESSIONOPERATOR_DOLLAR_OFFSET UNITYSDK_OFFSET(0x974C320)
#define EXPRESSIONV2_EXPRESSIONOPERATOR_EVALOP_OFFSET UNITYSDK_OFFSET(0x974C4C0)
#define EXPRESSIONV2_EXPRESSIONOPERATOR_GETPRECEDENCE_OFFSET UNITYSDK_OFFSET(0x974BB70)
#define EXPRESSIONV2_EXPRESSIONOPERATOR_ISDOUBLECHAROPERATOR_OFFSET UNITYSDK_OFFSET(0x974BF20)
#define EXPRESSIONV2_EXPRESSIONOPERATOR_ISSINGLECHAROPERATOR_OFFSET UNITYSDK_OFFSET(0x974BDD0)
#define EXPRESSIONV2_EXPRESSIONOPERATOR_ISUNARYOPERATOR_OFFSET UNITYSDK_OFFSET(0x974BC40)
#define EXPRESSIONV2_EXPRESSIONOPERATOR_NEG_OFFSET UNITYSDK_OFFSET(0x974C070)
#define EXPRESSIONV2_EXPRESSIONOPERATOR_SHARP_OFFSET UNITYSDK_OFFSET(0x974C180)
#define EXPRESSIONV2_EXPRESSIONOPERATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x974CBC0)
#define EXPRESSIONV2_EXPRESSIONOPERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x974CBB0)

namespace ExpressionV2
{
	inline static constexpr unsigned int ExpressionOperator_TypeDefinitionIndex = 59753;

	class ExpressionOperator : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_s_unaryOperatorStr()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ExpressionOperator_TypeDefinitionIndex)->GetStaticField(0x44960);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Int32>** StaticGet_s_opPrecedenceMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ExpressionOperator_TypeDefinitionIndex)->GetStaticField(0x44968);
		}
		static ::Il2CppArray<::System::UInt16>** StaticGet_s_singleCharOperator()
		{
			return (::Il2CppArray<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(ExpressionOperator_TypeDefinitionIndex)->GetStaticField(0x44970);
		}
		static ::Il2CppArray<::System::UInt16>** StaticGet_s_doubleCharOperator()
		{
			return (::Il2CppArray<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(ExpressionOperator_TypeDefinitionIndex)->GetStaticField(0x44978);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONOPERATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONOPERATOR__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetPrecedence(::System::UInt16 op)
		{
			return ((::System::Int32(*)(::System::UInt16))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONOPERATOR_GETPRECEDENCE_OFFSET))(op);
		}

		static ::System::Boolean IsUnaryOperator(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONOPERATOR_ISUNARYOPERATOR_OFFSET))(ch);
		}

		static ::System::Boolean IsSingleCharOperator(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONOPERATOR_ISSINGLECHAROPERATOR_OFFSET))(ch);
		}

		static ::System::Boolean IsDoubleCharOperator(::System::UInt16 op)
		{
			return ((::System::Boolean(*)(::System::UInt16))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONOPERATOR_ISDOUBLECHAROPERATOR_OFFSET))(op);
		}

		static ::ExpressionV2::ExprValue Neg(::ExpressionV2::ExprValue a)
		{
			return ((::ExpressionV2::ExprValue(*)(::ExpressionV2::ExprValue))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONOPERATOR_NEG_OFFSET))(a);
		}

		static ::ExpressionV2::ExprValue Sharp(::ExpressionV2::ExprValue a)
		{
			return ((::ExpressionV2::ExprValue(*)(::ExpressionV2::ExprValue))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONOPERATOR_SHARP_OFFSET))(a);
		}

		static ::ExpressionV2::ExprValue Dollar(::ExpressionV2::ExprValue a)
		{
			return ((::ExpressionV2::ExprValue(*)(::ExpressionV2::ExprValue))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONOPERATOR_DOLLAR_OFFSET))(a);
		}

		static ::ExpressionV2::ExprValue EvalOp(::System::UInt16 op, ::ExpressionV2::ExprValue a, ::ExpressionV2::ExprValue b)
		{
			return ((::ExpressionV2::ExprValue(*)(::System::UInt16, ::ExpressionV2::ExprValue, ::ExpressionV2::ExprValue))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONOPERATOR_EVALOP_OFFSET))(op, a, b);
		}
	};
}
