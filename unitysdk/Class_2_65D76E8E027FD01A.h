#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A3658A741325FC2.h"
#include "unitysdk/MoleMole/Battle/GameplayEffectModifier.h"

class Class_1_B9019A799F77EC17;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_65D76E8E027FD01A_METHOD_2_02F968A9F3CB33EC_OFFSET UNITYSDK_OFFSET(0xDC0F7D0)
#define CLASS_2_65D76E8E027FD01A_METHOD_2_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0xDC0F490)
#define CLASS_2_65D76E8E027FD01A_METHOD_2_4EABA0671C5D4363_OFFSET UNITYSDK_OFFSET(0xDC0F8C0)
#define CLASS_2_65D76E8E027FD01A_METHOD_2_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0xDC0EBB0)
#define CLASS_2_65D76E8E027FD01A_METHOD_2_AE80CBC984AADFD5_OFFSET UNITYSDK_OFFSET(0xDC0EDE0)
#define CLASS_2_65D76E8E027FD01A_METHOD_2_BAB6930F7ED4AA9E_OFFSET UNITYSDK_OFFSET(0xDC0FA30)
#define CLASS_2_65D76E8E027FD01A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDC0F9D0)
#define CLASS_2_65D76E8E027FD01A_METHOD_2_CFE6FB160FFF5938_OFFSET UNITYSDK_OFFSET(0xDC0EAF0)
#define CLASS_2_65D76E8E027FD01A__CTOR_OFFSET UNITYSDK_OFFSET(0xDC0F7C0)

inline static constexpr unsigned int Class_2_65D76E8E027FD01A_TypeDefinitionIndex = 53799;

class Class_2_65D76E8E027FD01A : public ::Class_1_8A3658A741325FC2
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_B9019A799F77EC17*>* Field_2_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::GameplayEffectModifier>* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65D76E8E027FD01A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CFE6FB160FFF5938()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65D76E8E027FD01A_METHOD_2_CFE6FB160FFF5938_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_02F968A9F3CB33EC(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_65D76E8E027FD01A_METHOD_2_02F968A9F3CB33EC_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE80CBC984AADFD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65D76E8E027FD01A_METHOD_2_AE80CBC984AADFD5_OFFSET))(this);
	}

	::System::Void Method_2_A1C7122184516C18()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65D76E8E027FD01A_METHOD_2_A1C7122184516C18_OFFSET))(this);
	}

	::Class_1_B9019A799F77EC17* Method_2_4EABA0671C5D4363(::System::Int32 a1)
	{
		return ((::Class_1_B9019A799F77EC17*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_65D76E8E027FD01A_METHOD_2_4EABA0671C5D4363_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65D76E8E027FD01A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65D76E8E027FD01A_METHOD_2_489E0B827662C211_OFFSET))(this);
	}

	::MoleMole::Battle::GameplayEffectModifier Method_2_BAB6930F7ED4AA9E(::System::Int32 a1)
	{
		return ((::MoleMole::Battle::GameplayEffectModifier(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_65D76E8E027FD01A_METHOD_2_BAB6930F7ED4AA9E_OFFSET))(this, a1);
	}
};
