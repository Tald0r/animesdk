#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_79526D80B8F6897C.h"
#include "unitysdk/NodeGraph/VariantUnion.h"

class Class_2_208CC9941471731A_548;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_EF4F614DB2686356_METHOD_2_5F4161998B263C7E_OFFSET UNITYSDK_OFFSET(0x8197820)
#define CLASS_2_EF4F614DB2686356_METHOD_2_6E1B7843622BB8BD_OFFSET UNITYSDK_OFFSET(0x8197460)
#define CLASS_2_EF4F614DB2686356_METHOD_2_C3EA49AC0F88C1DB_OFFSET UNITYSDK_OFFSET(0x8197620)
#define CLASS_2_EF4F614DB2686356_METHOD_2_D8BF40F27BE9947D_OFFSET UNITYSDK_OFFSET(0x8197560)
#define CLASS_2_EF4F614DB2686356_METHOD_2_FAC02F8494EF897F_OFFSET UNITYSDK_OFFSET(0x8197810)
#define CLASS_2_EF4F614DB2686356__CTOR_OFFSET UNITYSDK_OFFSET(0x81973D0)

inline static constexpr unsigned int Class_2_EF4F614DB2686356_TypeDefinitionIndex = 43100;

class Class_2_EF4F614DB2686356 : public ::Class_1_79526D80B8F6897C
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF4F614DB2686356__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6E1B7843622BB8BD(::Class_1_79526D80B8F6897C* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_79526D80B8F6897C*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF4F614DB2686356_METHOD_2_6E1B7843622BB8BD_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_D8BF40F27BE9947D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF4F614DB2686356_METHOD_2_D8BF40F27BE9947D_OFFSET))(this);
	}

	::System::Void Method_2_C3EA49AC0F88C1DB(::Class_2_208CC9941471731A_548* a1, ::NodeGraph::VariantUnion a2, ::System::Func_2<::NodeGraph::VariantUnion, ::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_548*, ::NodeGraph::VariantUnion, ::System::Func_2<::NodeGraph::VariantUnion, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_EF4F614DB2686356_METHOD_2_C3EA49AC0F88C1DB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_FAC02F8494EF897F(::Class_1_79526D80B8F6897C* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_79526D80B8F6897C*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF4F614DB2686356_METHOD_2_FAC02F8494EF897F_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_5F4161998B263C7E()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF4F614DB2686356_METHOD_2_5F4161998B263C7E_OFFSET))(this);
	}
};
