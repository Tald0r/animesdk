#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/Object.h"

class Class_1_AE0C440AAD48398A;
class Class_1_D375C91CCE5D3999;
class Class_1_EEA0111A28582B57;
namespace MoleMole { class ActivityWidgetContext; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralConsoleExistNormalBtnWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_1_C9FCD193B2E091DD_METHOD_1_4CD8461FEFD0CC16_OFFSET UNITYSDK_OFFSET(0xBBB7A90)
#define CLASS_1_C9FCD193B2E091DD_METHOD_1_7EC49C7DA20D319C_OFFSET UNITYSDK_OFFSET(0xBBB7FE0)
#define CLASS_1_C9FCD193B2E091DD_METHOD_1_9875F1FD7655484D_OFFSET UNITYSDK_OFFSET(0xBBB7CB0)
#define CLASS_1_C9FCD193B2E091DD_METHOD_1_AD22B45D706705D7_OFFSET UNITYSDK_OFFSET(0xBBB7F20)
#define CLASS_1_C9FCD193B2E091DD_METHOD_1_B2A9E476CE8053F4_OFFSET UNITYSDK_OFFSET(0xBBB7B10)
#define CLASS_1_C9FCD193B2E091DD_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xBBB7BE0)
#define CLASS_1_C9FCD193B2E091DD_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xBBB7C40)
#define CLASS_1_C9FCD193B2E091DD_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBBB7B80)
#define CLASS_1_C9FCD193B2E091DD__CTOR_OFFSET UNITYSDK_OFFSET(0xBBB7CA0)

inline static constexpr unsigned int Class_1_C9FCD193B2E091DD_TypeDefinitionIndex = 45603;

class Class_1_C9FCD193B2E091DD : public ::System::Object
{
public:
	::Class_1_D375C91CCE5D3999* Field_1_2; // 0x10
	::MoleMole::UIGeneralConsoleExistNormalBtnWidgetController* Field_1_3; // 0x18
	::MoleMole::ActivityWidgetContext* Field_1_0; // 0x20
	::Class_1_AE0C440AAD48398A* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9FCD193B2E091DD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4CD8461FEFD0CC16(::MoleMole::UIBaseController* a1, ::Class_1_EEA0111A28582B57* a2, ::MoleMole::UIControllerContextBase* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::Class_1_EEA0111A28582B57*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_1_C9FCD193B2E091DD_METHOD_1_4CD8461FEFD0CC16_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B2A9E476CE8053F4(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_1_C9FCD193B2E091DD_METHOD_1_B2A9E476CE8053F4_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9FCD193B2E091DD_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9FCD193B2E091DD_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9FCD193B2E091DD_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Boolean Method_1_9875F1FD7655484D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9FCD193B2E091DD_METHOD_1_9875F1FD7655484D_OFFSET))(this);
	}

	::System::Boolean Method_1_AD22B45D706705D7(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_C9FCD193B2E091DD_METHOD_1_AD22B45D706705D7_OFFSET))(this, a1);
	}

	::System::Void Method_1_7EC49C7DA20D319C(::UnityEngine::Events::UnityAction* a1, ::Share::ENotificationBadgeType a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + CLASS_1_C9FCD193B2E091DD_METHOD_1_7EC49C7DA20D319C_OFFSET))(this, a1, a2);
	}
};
