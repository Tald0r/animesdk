#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_982.h"
#include "unitysdk/System/Object.h"

class Class_2_0A55B5A82A61DAFA;
class Class_2_208CC9941471731A_972;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6E294AB9631D020F_FINALIZE_OFFSET UNITYSDK_OFFSET(0x7BD7560)
#define CLASS_1_6E294AB9631D020F_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x7BD7440)
#define CLASS_1_6E294AB9631D020F_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x7BD6BB0)
#define CLASS_1_6E294AB9631D020F_METHOD_1_19F311AC09A8016C_OFFSET UNITYSDK_OFFSET(0x7BD9290)
#define CLASS_1_6E294AB9631D020F_METHOD_1_2ED472EEE9018398_OFFSET UNITYSDK_OFFSET(0x7BD8A40)
#define CLASS_1_6E294AB9631D020F_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x7BD8970)
#define CLASS_1_6E294AB9631D020F_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x7BD7170)
#define CLASS_1_6E294AB9631D020F_METHOD_1_538A394A1ECA2F9C_OFFSET UNITYSDK_OFFSET(0x7BD8530)
#define CLASS_1_6E294AB9631D020F_METHOD_1_6FE6E0587E8D1F5C_OFFSET UNITYSDK_OFFSET(0x7BD6C30)
#define CLASS_1_6E294AB9631D020F_METHOD_1_82AED606E137C919_OFFSET UNITYSDK_OFFSET(0x7BD8640)
#define CLASS_1_6E294AB9631D020F_METHOD_1_A6E89EFA915ECC17_OFFSET UNITYSDK_OFFSET(0x7BD78B0)
#define CLASS_1_6E294AB9631D020F_METHOD_1_AA8656BCDBBD4870_OFFSET UNITYSDK_OFFSET(0x7BD73D0)
#define CLASS_1_6E294AB9631D020F_METHOD_1_BD6D492CF74B71A3_OFFSET UNITYSDK_OFFSET(0x7BD7640)
#define CLASS_1_6E294AB9631D020F_METHOD_1_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x7BD7750)
#define CLASS_1_6E294AB9631D020F_METHOD_1_F9D755D5519FC0DE_OFFSET UNITYSDK_OFFSET(0x7BD7200)
#define CLASS_1_6E294AB9631D020F__CTOR_OFFSET UNITYSDK_OFFSET(0x7BD77E0)

inline static constexpr unsigned int Class_1_6E294AB9631D020F_TypeDefinitionIndex = 71634;

class Class_1_6E294AB9631D020F : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_4; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_972*>*>* Field_1_0; // 0x20
	::Struct_2_1862835F8661A21F_982 Field_1_1; // 0x28
	::Il2CppArray<::Class_2_208CC9941471731A_972*>* Field_1_2; // 0x40
	::System::Int32 Field_1_5; // 0x48
	::System::Boolean Field_1_6; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E294AB9631D020F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E294AB9631D020F_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_6FE6E0587E8D1F5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E294AB9631D020F_METHOD_1_6FE6E0587E8D1F5C_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E294AB9631D020F_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E294AB9631D020F_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_BD6D492CF74B71A3(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6E294AB9631D020F_METHOD_1_BD6D492CF74B71A3_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA8656BCDBBD4870(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_6E294AB9631D020F_METHOD_1_AA8656BCDBBD4870_OFFSET))(this, a1);
	}

	::System::Void Method_1_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E294AB9631D020F_METHOD_1_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_A6E89EFA915ECC17(::Class_2_0A55B5A82A61DAFA* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Boolean a3)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Class_2_0A55B5A82A61DAFA*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6E294AB9631D020F_METHOD_1_A6E89EFA915ECC17_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_208CC9941471731A_972* Method_1_82AED606E137C919(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_972*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6E294AB9631D020F_METHOD_1_82AED606E137C919_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E294AB9631D020F_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::Il2CppArray<::Class_2_208CC9941471731A_972*>* Method_1_F9D755D5519FC0DE()
	{
		return ((::Il2CppArray<::Class_2_208CC9941471731A_972*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E294AB9631D020F_METHOD_1_F9D755D5519FC0DE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_972*>* Method_1_538A394A1ECA2F9C(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_972*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6E294AB9631D020F_METHOD_1_538A394A1ECA2F9C_OFFSET))(this, a1);
	}

	::System::Void Method_1_2ED472EEE9018398(::Class_2_0A55B5A82A61DAFA* a1, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_972*>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0A55B5A82A61DAFA*, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_972*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6E294AB9631D020F_METHOD_1_2ED472EEE9018398_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_208CC9941471731A_972* Method_1_19F311AC09A8016C(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_972*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6E294AB9631D020F_METHOD_1_19F311AC09A8016C_OFFSET))(this, a1);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E294AB9631D020F_METHOD_1_0865E94460F11643_OFFSET))(this);
	}
};
