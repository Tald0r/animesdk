#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_181.h"
#include "unitysdk/System/Object.h"

class Class_1_48F4A404A08692BE_176;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_ABC3BE7EB1647824_FINALIZE_OFFSET UNITYSDK_OFFSET(0x9FC6190)
#define CLASS_1_ABC3BE7EB1647824_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x9FC6070)
#define CLASS_1_ABC3BE7EB1647824_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x9FC5C10)
#define CLASS_1_ABC3BE7EB1647824_METHOD_1_1840092C3BDA8861_OFFSET UNITYSDK_OFFSET(0x9FC65A0)
#define CLASS_1_ABC3BE7EB1647824_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x9FC64D0)
#define CLASS_1_ABC3BE7EB1647824_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9FC5F70)
#define CLASS_1_ABC3BE7EB1647824_METHOD_1_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x9FC5C90)
#define CLASS_1_ABC3BE7EB1647824_METHOD_1_AA8656BCDBBD4870_OFFSET UNITYSDK_OFFSET(0x9FC6000)
#define CLASS_1_ABC3BE7EB1647824_METHOD_1_BD6D492CF74B71A3_OFFSET UNITYSDK_OFFSET(0x9FC6260)
#define CLASS_1_ABC3BE7EB1647824_METHOD_1_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x9FC6370)
#define CLASS_1_ABC3BE7EB1647824__CTOR_OFFSET UNITYSDK_OFFSET(0x9FC6400)

inline static constexpr unsigned int Class_1_ABC3BE7EB1647824_TypeDefinitionIndex = 62132;

class Class_1_ABC3BE7EB1647824 : public ::System::Object
{
public:
	::Struct_2_1862835F8661A21F_181 Field_1_0; // 0x10
	::Il2CppArray<::Class_1_48F4A404A08692BE_176*>* Field_1_1; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x38
	::System::Int32 Field_1_4; // 0x40
	::System::Boolean Field_1_5; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABC3BE7EB1647824__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABC3BE7EB1647824_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABC3BE7EB1647824_METHOD_1_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABC3BE7EB1647824_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABC3BE7EB1647824_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_BD6D492CF74B71A3(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_ABC3BE7EB1647824_METHOD_1_BD6D492CF74B71A3_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA8656BCDBBD4870(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_ABC3BE7EB1647824_METHOD_1_AA8656BCDBBD4870_OFFSET))(this, a1);
	}

	::System::Void Method_1_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABC3BE7EB1647824_METHOD_1_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABC3BE7EB1647824_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABC3BE7EB1647824_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::Class_1_48F4A404A08692BE_176* Method_1_1840092C3BDA8861(::System::Int32 a1)
	{
		return ((::Class_1_48F4A404A08692BE_176*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ABC3BE7EB1647824_METHOD_1_1840092C3BDA8861_OFFSET))(this, a1);
	}
};
