#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/MiHoYo/SDK/Common/OS/AgeGatePayValidationManager.h"

namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentProcessDialog; }
namespace MiHoYo::SDK::Win::OS { class AgeGatePayValidationManager_AgeGateParentalConsentDialogBridge; }
namespace MiHoYo::SDK::Win::OS { class AgeGatePayValidationManager_AgeGateParentalConsentProcessDialogBridge; }
namespace MiHoYo::SDK::Win::OS { class AgeGatePayValidationManager_AgeGateParentalConsentRequiredDialogBridge; }
namespace MiHoYo::SDK::Win::OS { class AgeGatePayValidationManager_AgeGateParentalConsentSentDialogBridge; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPARENTALCONSENTPROCESSDIALOG_OFFSET UNITYSDK_OFFSET(0x18227570)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPARENTALCONSENTREQUIREDDIALOG_OFFSET UNITYSDK_OFFSET(0x18226E40)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPARENTALCONSENTSENTDIALOG_OFFSET UNITYSDK_OFFSET(0x18227130)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPAYMENTERRORDIALOG_OFFSET UNITYSDK_OFFSET(0x18227670)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_CREATEPARENTALCONSENTDIALOG_OFFSET UNITYSDK_OFFSET(0x18226B00)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x182264A0)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_GET__AGEGATEPARENTALCONSENTDIALOGBRIDGE_OFFSET UNITYSDK_OFFSET(0x182267F0)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_GET__AGEGATEPARENTALCONSENTPROCESSDIALOGBRIDGE_OFFSET UNITYSDK_OFFSET(0x182274F0)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_GET__AGEGATEPARENTALCONSENTREQUIREDDIALOGBRIDGE_OFFSET UNITYSDK_OFFSET(0x18226DC0)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_GET__AGEGATEPARENTALCONSENTSENTDIALOGBRIDGE_OFFSET UNITYSDK_OFFSET(0x182270B0)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_ONPARENTALCONSENTINPUTEMAILBUTTONPRESSEDCONFIRM_OFFSET UNITYSDK_OFFSET(0x18226870)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_SET__AGEGATEPARENTALCONSENTDIALOGBRIDGE_OFFSET UNITYSDK_OFFSET(0x18226830)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_SET__AGEGATEPARENTALCONSENTPROCESSDIALOGBRIDGE_OFFSET UNITYSDK_OFFSET(0x18227530)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_SET__AGEGATEPARENTALCONSENTREQUIREDDIALOGBRIDGE_OFFSET UNITYSDK_OFFSET(0x18226E00)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_SET__AGEGATEPARENTALCONSENTSENTDIALOGBRIDGE_OFFSET UNITYSDK_OFFSET(0x182270F0)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER__CREATEAGEGATEPAYMENTERRORDIALOG_B__27_0_OFFSET UNITYSDK_OFFSET(0x18227770)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER__CREATEAGEGATEPAYMENTERRORDIALOG_B__27_1_OFFSET UNITYSDK_OFFSET(0x18227810)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x182266B0)

namespace MiHoYo::SDK::Win::OS
{
	inline static constexpr unsigned int AgeGatePayValidationManager_TypeDefinitionIndex = 19180;

	class AgeGatePayValidationManager : public ::MiHoYo::SDK::Common::OS::AgeGatePayValidationManager
	{
	public:
		static ::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentSentDialogBridge** StaticGet___AgeGateParentalConsentSentDialogBridge_k__BackingField()
		{
			return (::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentSentDialogBridge**)Il2CppClass::FromTypeDefinitionIndex(AgeGatePayValidationManager_TypeDefinitionIndex)->GetStaticField(0xA670);
		}
		static ::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentProcessDialogBridge** StaticGet___AgeGateParentalConsentProcessDialogBridge_k__BackingField()
		{
			return (::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentProcessDialogBridge**)Il2CppClass::FromTypeDefinitionIndex(AgeGatePayValidationManager_TypeDefinitionIndex)->GetStaticField(0xA678);
		}
		static ::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentDialogBridge** StaticGet___AgeGateParentalConsentDialogBridge_k__BackingField()
		{
			return (::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentDialogBridge**)Il2CppClass::FromTypeDefinitionIndex(AgeGatePayValidationManager_TypeDefinitionIndex)->GetStaticField(0xA680);
		}
		static ::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentRequiredDialogBridge** StaticGet___AgeGateParentalConsentRequiredDialogBridge_k__BackingField()
		{
			return (::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentRequiredDialogBridge**)Il2CppClass::FromTypeDefinitionIndex(AgeGatePayValidationManager_TypeDefinitionIndex)->GetStaticField(0xA688);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Common::OS::AgeGatePayValidationManager* get_Instance()
		{
			return ((::MiHoYo::SDK::Common::OS::AgeGatePayValidationManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentDialogBridge* get__AgeGateParentalConsentDialogBridge()
		{
			return ((::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentDialogBridge*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_GET__AGEGATEPARENTALCONSENTDIALOGBRIDGE_OFFSET))();
		}

		static ::System::Void set__AgeGateParentalConsentDialogBridge(::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentDialogBridge* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentDialogBridge*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_SET__AGEGATEPARENTALCONSENTDIALOGBRIDGE_OFFSET))(value);
		}

		::System::Void OnParentalConsentInputEmailButtonPressedConfirm(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* dialog, ::System::String* email)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_ONPARENTALCONSENTINPUTEMAILBUTTONPRESSEDCONFIRM_OFFSET))(this, dialog, email);
		}

		::System::Void CreateParentalConsentDialog(::System::String* email)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_CREATEPARENTALCONSENTDIALOG_OFFSET))(this, email);
		}

		static ::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentRequiredDialogBridge* get__AgeGateParentalConsentRequiredDialogBridge()
		{
			return ((::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentRequiredDialogBridge*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_GET__AGEGATEPARENTALCONSENTREQUIREDDIALOGBRIDGE_OFFSET))();
		}

		static ::System::Void set__AgeGateParentalConsentRequiredDialogBridge(::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentRequiredDialogBridge* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentRequiredDialogBridge*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_SET__AGEGATEPARENTALCONSENTREQUIREDDIALOGBRIDGE_OFFSET))(value);
		}

		::System::Void CreateAgeGateParentalConsentRequiredDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPARENTALCONSENTREQUIREDDIALOG_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentSentDialogBridge* get__AgeGateParentalConsentSentDialogBridge()
		{
			return ((::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentSentDialogBridge*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_GET__AGEGATEPARENTALCONSENTSENTDIALOGBRIDGE_OFFSET))();
		}

		static ::System::Void set__AgeGateParentalConsentSentDialogBridge(::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentSentDialogBridge* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentSentDialogBridge*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_SET__AGEGATEPARENTALCONSENTSENTDIALOGBRIDGE_OFFSET))(value);
		}

		::System::Void CreateAgeGateParentalConsentSentDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPARENTALCONSENTSENTDIALOG_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentProcessDialogBridge* get__AgeGateParentalConsentProcessDialogBridge()
		{
			return ((::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentProcessDialogBridge*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_GET__AGEGATEPARENTALCONSENTPROCESSDIALOGBRIDGE_OFFSET))();
		}

		static ::System::Void set__AgeGateParentalConsentProcessDialogBridge(::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentProcessDialogBridge* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentProcessDialogBridge*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_SET__AGEGATEPARENTALCONSENTPROCESSDIALOGBRIDGE_OFFSET))(value);
		}

		::System::Void CreateAgeGateParentalConsentProcessDialog(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPARENTALCONSENTPROCESSDIALOG_OFFSET))(this, action);
		}

		::System::Void CreateAgeGatePaymentErrorDialog(::System::String* hintMessage)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPAYMENTERRORDIALOG_OFFSET))(this, hintMessage);
		}

		::System::Void _CreateAgeGatePaymentErrorDialog_b__27_0(::MiHoYo::SDK::Alert_AlertResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER__CREATEAGEGATEPAYMENTERRORDIALOG_B__27_0_OFFSET))(this, result);
		}

		::System::Void _CreateAgeGatePaymentErrorDialog_b__27_1(::MiHoYo::SDK::CallbackModel_1<::System::String*>* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER__CREATEAGEGATEPAYMENTERRORDIALOG_B__27_1_OFFSET))(this, response);
		}
	};
}
