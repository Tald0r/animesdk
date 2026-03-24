#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
namespace MoleMole { class UIWindowController; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1F219549AE9B7C82_CLASS_1_D68240216FCD875C_METHOD_1_BC921F4876135ACB_OFFSET UNITYSDK_OFFSET(0x638DA10)
#define CLASS_1_1F219549AE9B7C82_CLASS_1_D68240216FCD875C_METHOD_1_F28C9FF97613426E_OFFSET UNITYSDK_OFFSET(0x638D8C0)
#define CLASS_1_1F219549AE9B7C82_CLASS_1_D68240216FCD875C__CTOR_OFFSET UNITYSDK_OFFSET(0x638D8B0)

inline static constexpr unsigned int Class_1_1F219549AE9B7C82_Class_1_D68240216FCD875C_TypeDefinitionIndex = 62832;

class Class_1_1F219549AE9B7C82_Class_1_D68240216FCD875C : public ::System::Object
{
public:
	::MoleMole::UIWindowController* Field_1_1; // 0x10
	::System::Action_1<::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_D68240216FCD875C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F28C9FF97613426E(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_D68240216FCD875C_METHOD_1_F28C9FF97613426E_OFFSET))(this, a1);
	}

	::System::Void Method_1_BC921F4876135ACB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_D68240216FCD875C_METHOD_1_BC921F4876135ACB_OFFSET))(this, a1);
	}
};
