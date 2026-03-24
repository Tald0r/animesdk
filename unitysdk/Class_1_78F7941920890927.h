#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_41373B0AE65CE02E_4.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1009;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_78F7941920890927_FINALIZE_OFFSET UNITYSDK_OFFSET(0x683DA00)
#define CLASS_1_78F7941920890927_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x683D5C0)
#define CLASS_1_78F7941920890927_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x683D0A0)
#define CLASS_1_78F7941920890927_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x683D120)
#define CLASS_1_78F7941920890927_METHOD_1_35241FCD51C3F125_OFFSET UNITYSDK_OFFSET(0x683D6E0)
#define CLASS_1_78F7941920890927_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x683D4C0)
#define CLASS_1_78F7941920890927_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x683D1F0)
#define CLASS_1_78F7941920890927_METHOD_1_AA8656BCDBBD4870_OFFSET UNITYSDK_OFFSET(0x683D550)
#define CLASS_1_78F7941920890927_METHOD_1_BD6D492CF74B71A3_OFFSET UNITYSDK_OFFSET(0x683DAD0)
#define CLASS_1_78F7941920890927_METHOD_1_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x683DBF0)
#define CLASS_1_78F7941920890927__CTOR_OFFSET UNITYSDK_OFFSET(0x683DC80)

inline static constexpr unsigned int Class_1_78F7941920890927_TypeDefinitionIndex = 61991;

class Class_1_78F7941920890927 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_2; // 0x10
	::Il2CppArray<::Class_2_208CC9941471731A_1009*>* Field_1_1; // 0x18
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_3; // 0x20
	::Struct_2_41373B0AE65CE02E_4 Field_1_0; // 0x28
	::System::Boolean Field_1_5; // 0x40
	::System::Int32 Field_1_4; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78F7941920890927__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78F7941920890927_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78F7941920890927_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78F7941920890927_METHOD_1_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78F7941920890927_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::String* Method_1_35241FCD51C3F125(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_78F7941920890927_METHOD_1_35241FCD51C3F125_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78F7941920890927_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_BD6D492CF74B71A3(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_78F7941920890927_METHOD_1_BD6D492CF74B71A3_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA8656BCDBBD4870(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_78F7941920890927_METHOD_1_AA8656BCDBBD4870_OFFSET))(this, a1);
	}

	::System::Void Method_1_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78F7941920890927_METHOD_1_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78F7941920890927_METHOD_1_0865E94460F11643_OFFSET))(this);
	}
};
