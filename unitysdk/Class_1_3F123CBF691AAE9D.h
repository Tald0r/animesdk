#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1141.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_590;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_3F123CBF691AAE9D_FINALIZE_OFFSET UNITYSDK_OFFSET(0x189A9470)
#define CLASS_1_3F123CBF691AAE9D_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x189A8C20)
#define CLASS_1_3F123CBF691AAE9D_METHOD_1_20F0A15C724866EA_OFFSET UNITYSDK_OFFSET(0x189A9740)
#define CLASS_1_3F123CBF691AAE9D_METHOD_1_3BC6B414068B5B5A_OFFSET UNITYSDK_OFFSET(0x189A9970)
#define CLASS_1_3F123CBF691AAE9D_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x189A8EA0)
#define CLASS_1_3F123CBF691AAE9D_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x189A92D0)
#define CLASS_1_3F123CBF691AAE9D_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x189A9390)
#define CLASS_1_3F123CBF691AAE9D_METHOD_1_C64F3CA8A6C36FAC_OFFSET UNITYSDK_OFFSET(0x189A9070)
#define CLASS_1_3F123CBF691AAE9D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x189A8C00)
#define CLASS_1_3F123CBF691AAE9D_METHOD_1_E622BE70AEF537B2_OFFSET UNITYSDK_OFFSET(0x189A8F80)
#define CLASS_1_3F123CBF691AAE9D_METHOD_1_F34B2919D6F88ECA_OFFSET UNITYSDK_OFFSET(0x189A9200)
#define CLASS_1_3F123CBF691AAE9D_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x189A9950)
#define CLASS_1_3F123CBF691AAE9D__CCTOR_OFFSET UNITYSDK_OFFSET(0x189A9670)
#define CLASS_1_3F123CBF691AAE9D__CTOR_OFFSET UNITYSDK_OFFSET(0x189A95A0)

inline static constexpr unsigned int Class_1_3F123CBF691AAE9D_TypeDefinitionIndex = 15962;

class Class_1_3F123CBF691AAE9D : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3F123CBF691AAE9D_TypeDefinitionIndex)->GetStaticField(0x8D70);
	}
	::Struct_2_1862835F8661A21F_1141 Field_1_1; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_4; // 0x28
	::Il2CppArray<::Class_2_208CC9941471731A_590*>* Field_1_2; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_3; // 0x38
	::System::Boolean Field_1_6; // 0x40
	::System::Int32 Field_1_5; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F123CBF691AAE9D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3F123CBF691AAE9D__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F123CBF691AAE9D_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F123CBF691AAE9D_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_C64F3CA8A6C36FAC(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3F123CBF691AAE9D_METHOD_1_C64F3CA8A6C36FAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_E622BE70AEF537B2(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_3F123CBF691AAE9D_METHOD_1_E622BE70AEF537B2_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F123CBF691AAE9D_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F123CBF691AAE9D_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F123CBF691AAE9D_FINALIZE_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_590* Method_1_20F0A15C724866EA(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_590*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3F123CBF691AAE9D_METHOD_1_20F0A15C724866EA_OFFSET))(this, a1);
	}

	::Il2CppArray<::Class_2_208CC9941471731A_590*>* Method_1_F34B2919D6F88ECA()
	{
		return ((::Il2CppArray<::Class_2_208CC9941471731A_590*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F123CBF691AAE9D_METHOD_1_F34B2919D6F88ECA_OFFSET))(this);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F123CBF691AAE9D_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F123CBF691AAE9D_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_590* Method_1_3BC6B414068B5B5A(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_590*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3F123CBF691AAE9D_METHOD_1_3BC6B414068B5B5A_OFFSET))(this, a1);
	}
};
