#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_232;
class Class_3_9D33A2E94B3E53DC;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_B640B8B6C20C4AB0___C_METHOD_1_933713A4305E9272_OFFSET UNITYSDK_OFFSET(0x94D46C0)
#define CLASS_2_B640B8B6C20C4AB0___C_METHOD_1_DB95BB127AF8AF7E_OFFSET UNITYSDK_OFFSET(0x94D46B0)
#define CLASS_2_B640B8B6C20C4AB0___C_METHOD_1_E26C967FF0DDE82A_OFFSET UNITYSDK_OFFSET(0x94D4690)
#define CLASS_2_B640B8B6C20C4AB0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x94D4640)
#define CLASS_2_B640B8B6C20C4AB0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x94D4680)

inline static constexpr unsigned int Class_2_B640B8B6C20C4AB0___c_TypeDefinitionIndex = 62588;

class Class_2_B640B8B6C20C4AB0___c : public ::System::Object
{
public:
	static ::Class_2_B640B8B6C20C4AB0___c** StaticGet___9()
	{
		return (::Class_2_B640B8B6C20C4AB0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B640B8B6C20C4AB0___c_TypeDefinitionIndex)->GetStaticField(0x3FFF0);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_3_9D33A2E94B3E53DC*>, ::Class_3_9D33A2E94B3E53DC*>** StaticGet___9__57_1()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_3_9D33A2E94B3E53DC*>, ::Class_3_9D33A2E94B3E53DC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B640B8B6C20C4AB0___c_TypeDefinitionIndex)->GetStaticField(0x3FFF8);
	}
	static ::System::Func_2<::Class_2_208CC9941471731A_232*, ::System::Int32>** StaticGet___9__72_1()
	{
		return (::System::Func_2<::Class_2_208CC9941471731A_232*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B640B8B6C20C4AB0___c_TypeDefinitionIndex)->GetStaticField(0x40000);
	}
	static ::System::Func_2<::Class_3_9D33A2E94B3E53DC*, ::System::UInt32>** StaticGet___9__105_0()
	{
		return (::System::Func_2<::Class_3_9D33A2E94B3E53DC*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B640B8B6C20C4AB0___c_TypeDefinitionIndex)->GetStaticField(0x40008);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B640B8B6C20C4AB0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B640B8B6C20C4AB0___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_E26C967FF0DDE82A(::Class_3_9D33A2E94B3E53DC* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_3_9D33A2E94B3E53DC*))((::PBYTE)hIl2Cpp + CLASS_2_B640B8B6C20C4AB0___C_METHOD_1_E26C967FF0DDE82A_OFFSET))(this, a1);
	}

	::Class_3_9D33A2E94B3E53DC* Method_1_DB95BB127AF8AF7E(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_3_9D33A2E94B3E53DC*> a1)
	{
		return ((::Class_3_9D33A2E94B3E53DC*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_3_9D33A2E94B3E53DC*>))((::PBYTE)hIl2Cpp + CLASS_2_B640B8B6C20C4AB0___C_METHOD_1_DB95BB127AF8AF7E_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_933713A4305E9272(::Class_2_208CC9941471731A_232* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_232*))((::PBYTE)hIl2Cpp + CLASS_2_B640B8B6C20C4AB0___C_METHOD_1_933713A4305E9272_OFFSET))(this, a1);
	}
};
