#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ProtocolType.h"
#include "unitysdk/MiHoYo/SDK/UniWebViewMessage.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class ProtocolManager_MarketingProtocolModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Diagnostics { class Stopwatch; }

#define MIHOYO_SDK_PROTOCOLMANAGER_CHECKOVERSEASHOWPROTOCOL_OFFSET UNITYSDK_OFFSET(0x180DECF0)
#define MIHOYO_SDK_PROTOCOLMANAGER_CHECKSHOWLAUNCHPROTOCOLCOMPLIANCE_OFFSET UNITYSDK_OFFSET(0x180DA350)
#define MIHOYO_SDK_PROTOCOLMANAGER_CHECKSHOWLAUNCHPROTOCOL_OFFSET UNITYSDK_OFFSET(0x180DA780)
#define MIHOYO_SDK_PROTOCOLMANAGER_CHECKSHOWPROTOCOL_OFFSET UNITYSDK_OFFSET(0x180D9190)
#define MIHOYO_SDK_PROTOCOLMANAGER_CLEARMARKETINGMODEL_OFFSET UNITYSDK_OFFSET(0x180DE640)
#define MIHOYO_SDK_PROTOCOLMANAGER_DELETEPROTOCOLFLAGSBYAID_OFFSET UNITYSDK_OFFSET(0x180E04B0)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETLAUNCHPROTOCOLSHOWFLAGKEY_OFFSET UNITYSDK_OFFSET(0x180DCD40)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETLAUNCHPROTOCOLSHOWFLAG_OFFSET UNITYSDK_OFFSET(0x180E3900)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETLAUNCHPROTOCOLTIMEOUTBOXCONFIG_OFFSET UNITYSDK_OFFSET(0x180DA170)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETLAUNCHPROTOCOLVERSIONKEY_OFFSET UNITYSDK_OFFSET(0x180E5B30)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETLAUNCHPROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x180E4080)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETNEWACCOUNTSHOWID_OFFSET UNITYSDK_OFFSET(0x180DB560)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETNEWPROTOCOLSHOWFLAGBYAIDANDLANGUAGE_OFFSET UNITYSDK_OFFSET(0x180E0770)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOLSHOWFLAGKEY_OFFSET UNITYSDK_OFFSET(0x180DB2C0)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOLSHOWFLAG_OFFSET UNITYSDK_OFFSET(0x180DE0A0)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOLVERSIONKEYBYAIDANDLANGUAGE_OFFSET UNITYSDK_OFFSET(0x180E07E0)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOLVERSIONKEY_OFFSET UNITYSDK_OFFSET(0x180DDB80)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOL_OFFSET UNITYSDK_OFFSET(0x180DB830)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETUSERPROTOCOLFLAG_OFFSET UNITYSDK_OFFSET(0x180DBC50)
#define MIHOYO_SDK_PROTOCOLMANAGER_GET_MARKETINGMODEL_OFFSET UNITYSDK_OFFSET(0x180DE1F0)
#define MIHOYO_SDK_PROTOCOLMANAGER_HIDEOVERSEAPROTOCOL_OFFSET UNITYSDK_OFFSET(0x180DFC10)
#define MIHOYO_SDK_PROTOCOLMANAGER_HIDEPROTOCOL_OFFSET UNITYSDK_OFFSET(0x180DF4A0)
#define MIHOYO_SDK_PROTOCOLMANAGER_INITWITHUSERAGREEMENTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x180D8AF0)
#define MIHOYO_SDK_PROTOCOLMANAGER_NEEDUPDATEPROTOCOL_OFFSET UNITYSDK_OFFSET(0x180E4740)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONACCEPTLAUNCHPROTOCOL_1_OFFSET UNITYSDK_OFFSET(0x180E0940)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONACCEPTLAUNCHPROTOCOL_OFFSET UNITYSDK_OFFSET(0x180DC8D0)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONACCEPTOVERSEAUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x180E0B20)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONACCEPTUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x180E0840)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONGETLAUNCHPROTOCOL_OFFSET UNITYSDK_OFFSET(0x180E53F0)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONGETMARKETINGPROTOCOLINFO_OFFSET UNITYSDK_OFFSET(0x180DE7B0)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONGETPROTOCOL_OFFSET UNITYSDK_OFFSET(0x180DD210)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONNOSHOWLAUNCHPROTOCOL_OFFSET UNITYSDK_OFFSET(0x180D8F90)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONPROTOCOLACCEPT_OFFSET UNITYSDK_OFFSET(0x180DF480)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONPROTOCOLREFUSE_OFFSET UNITYSDK_OFFSET(0x180DF490)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONPROTOCOL_OFFSET UNITYSDK_OFFSET(0x180DDC70)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONREFUSELAUNCHPROTOCOL_OFFSET UNITYSDK_OFFSET(0x180DD010)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONREFUSEOVERSEAUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x180E0D40)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONREFUSEUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x180E0A30)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONREQUESTLAUNCHPROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x180E43A0)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONSHOWPROTOCOLTIMEOUT_OFFSET UNITYSDK_OFFSET(0x180E3B90)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x180E2AB0)
#define MIHOYO_SDK_PROTOCOLMANAGER_OPENPROTOCOLWEBVIEW_OFFSET UNITYSDK_OFFSET(0x180E2220)
#define MIHOYO_SDK_PROTOCOLMANAGER_REQUESTAGREEMENTINFOS_OFFSET UNITYSDK_OFFSET(0x180DC0B0)
#define MIHOYO_SDK_PROTOCOLMANAGER_REQUESTLAUNCHPROTOCOL_OFFSET UNITYSDK_OFFSET(0x180E2F00)
#define MIHOYO_SDK_PROTOCOLMANAGER_REQUESTOPERATEAGREEMENT_OFFSET UNITYSDK_OFFSET(0x180DE250)
#define MIHOYO_SDK_PROTOCOLMANAGER_REQUESTPROTOCOL_OFFSET UNITYSDK_OFFSET(0x180DAAD0)
#define MIHOYO_SDK_PROTOCOLMANAGER_SETNEWPROCOTOL_OFFSET UNITYSDK_OFFSET(0x180DBA40)
#define MIHOYO_SDK_PROTOCOLMANAGER_SETNEWUSERPROTOCOLFLAG_OFFSET UNITYSDK_OFFSET(0x180DBD20)
#define MIHOYO_SDK_PROTOCOLMANAGER_SETPROCOTOL_OFFSET UNITYSDK_OFFSET(0x180DD4F0)
#define MIHOYO_SDK_PROTOCOLMANAGER_SETUSERPROTOCOLFLAG_OFFSET UNITYSDK_OFFSET(0x180DC240)
#define MIHOYO_SDK_PROTOCOLMANAGER_SET_MARKETINGMODEL_OFFSET UNITYSDK_OFFSET(0x180DE190)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWACCOUNTPRIVACYPROTOCOL_OFFSET UNITYSDK_OFFSET(0x180E2940)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWACCOUNTUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x180E27D0)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWLAUNCHERPROTOCOLCOMPLIANCE_OFFSET UNITYSDK_OFFSET(0x180D9C30)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWLAUNCHERPROTOCOLFALLBACK_OFFSET UNITYSDK_OFFSET(0x180DA6A0)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWLAUNCHERPROTOCOL_1_OFFSET UNITYSDK_OFFSET(0x180D8EB0)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWLAUNCHERPROTOCOL_OFFSET UNITYSDK_OFFSET(0x180D8E70)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWMARKETINGPROTOCOL_OFFSET UNITYSDK_OFFSET(0x180E26F0)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWOVERSEAPROTOCOLPLUGINUI_OFFSET UNITYSDK_OFFSET(0x180DFE20)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWOVERSEAPROTOCOL_OFFSET UNITYSDK_OFFSET(0x180DF2E0)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWPRIVACYPROTOCOL_OFFSET UNITYSDK_OFFSET(0x180E1350)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWPROTOCOLPLUGINUI_OFFSET UNITYSDK_OFFSET(0x180DF6B0)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWPROTOCOLVIASHOWFLAG_OFFSET UNITYSDK_OFFSET(0x180E3BE0)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWPROTOCOL_OFFSET UNITYSDK_OFFSET(0x180DB350)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWTEENAGERUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x180E1840)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWTHIRDPRIVACY_OFFSET UNITYSDK_OFFSET(0x180E1D30)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x180E0E60)
#define MIHOYO_SDK_PROTOCOLMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x180E5E60)
#define MIHOYO_SDK_PROTOCOLMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x180E5E00)
#define MIHOYO_SDK_PROTOCOLMANAGER__ONSHOWPROTOCOLTIMEOUT_B__73_0_OFFSET UNITYSDK_OFFSET(0x180E6380)
#define MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__46_0_OFFSET UNITYSDK_OFFSET(0x180E5EF0)
#define MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__46_1_OFFSET UNITYSDK_OFFSET(0x180E6100)
#define MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__46_2_OFFSET UNITYSDK_OFFSET(0x180E6110)
#define MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__46_3_OFFSET UNITYSDK_OFFSET(0x180E6120)
#define MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__46_4_OFFSET UNITYSDK_OFFSET(0x180E6200)
#define MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__46_5_OFFSET UNITYSDK_OFFSET(0x180E6360)
#define MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__46_6_OFFSET UNITYSDK_OFFSET(0x180E6350)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolManager_TypeDefinitionIndex = 18052;

	class ProtocolManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::ProtocolManager_MarketingProtocolModel** StaticGet__marketingModel_k__BackingField()
		{
			return (::MiHoYo::SDK::ProtocolManager_MarketingProtocolModel**)Il2CppClass::FromTypeDefinitionIndex(ProtocolManager_TypeDefinitionIndex)->GetStaticField(0x93F0);
		}
		static ::MiHoYo::SDK::ProtocolManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::ProtocolManager**)Il2CppClass::FromTypeDefinitionIndex(ProtocolManager_TypeDefinitionIndex)->GetStaticField(0x93F8);
		}
		::System::Action* OnRefuse; // 0x10
		::System::String* m_strMaketingStatus; // 0x18
		::MiHoYo::SDK::JSONNode* _launchProtocol; // 0x20
		::System::String* m_strMarketingUrl; // 0x28
		::System::Action* OnAccept; // 0x30
		::System::String* accountShowId; // 0x38
		::MiHoYo::SDK::JSONNode* _protocol; // 0x40
		::System::Diagnostics::Stopwatch* m_stopwatchProtocolRequest; // 0x48
		::System::String* m_strMarketingTitle; // 0x50
		::System::Int32 _launchTimeout; // 0x58
		::System::Boolean m_bHasResponseReturn; // 0x5C
		::System::Boolean m_bWaitingTimeout; // 0x5D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__CCTOR_OFFSET))();
		}

		::System::Boolean InitWithUserAgreementParameters(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_INITWITHUSERAGREEMENTPARAMETERS_OFFSET))(this, jsonString, callback);
		}

		::System::Void ShowLauncherProtocol(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWLAUNCHERPROTOCOL_OFFSET))(this, jsonString, callback);
		}

		::System::Void ShowLauncherProtocol_1(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWLAUNCHERPROTOCOL_1_OFFSET))(this, callback);
		}

		::System::Void ShowLauncherProtocolCompliance(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWLAUNCHERPROTOCOLCOMPLIANCE_OFFSET))(this, jsonString, callback);
		}

		::System::Void ShowLauncherProtocolFallback(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWLAUNCHERPROTOCOLFALLBACK_OFFSET))(this, callback);
		}

		::System::Boolean CheckShowProtocol(::MiHoYo::SDK::JSONNode* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_CHECKSHOWPROTOCOL_OFFSET))(this, data);
		}

		::System::Void OnAcceptLaunchProtocol(::System::Action_1<::System::String*>* callback, ::System::Boolean isFallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONACCEPTLAUNCHPROTOCOL_OFFSET))(this, callback, isFallback);
		}

		::System::Void OnRefuseLaunchProtocol(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONREFUSELAUNCHPROTOCOL_OFFSET))(this, callback);
		}

		::System::Void OnNoShowLaunchProtocol(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONNOSHOWLAUNCHPROTOCOL_OFFSET))(this, callback);
		}

		::System::Void RequestProtocol()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_REQUESTPROTOCOL_OFFSET))(this);
		}

		::System::Void OnGetProtocol(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONGETPROTOCOL_OFFSET))(this, response);
		}

		::MiHoYo::SDK::JSONNode* GetProtocol()
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOL_OFFSET))(this);
		}

		::System::Void SetProcotol(::MiHoYo::SDK::JSONNode* protocol)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SETPROCOTOL_OFFSET))(this, protocol);
		}

		::System::Void OnProtocol(::System::String* responseString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONPROTOCOL_OFFSET))(this, responseString);
		}

		::System::Void SetUserProtocolFlag(::System::String* combo_id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SETUSERPROTOCOLFLAG_OFFSET))(this, combo_id);
		}

		::MiHoYo::SDK::JSONNode* GetUserProtocolFlag(::System::String* combo_id)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETUSERPROTOCOLFLAG_OFFSET))(this, combo_id);
		}

		::System::String* GetProtocolVersionKey(::System::String* accountKey)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOLVERSIONKEY_OFFSET))(this, accountKey);
		}

		::System::String* GetProtocolShowFlag(::System::String* accountKey)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOLSHOWFLAG_OFFSET))(this, accountKey);
		}

		static ::System::String* GetNewAccountShowId(::MiHoYo::SDK::JSONNode* data)
		{
			return ((::System::String*(*)(::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETNEWACCOUNTSHOWID_OFFSET))(data);
		}

		static ::System::Void set_marketingModel(::MiHoYo::SDK::ProtocolManager_MarketingProtocolModel* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::ProtocolManager_MarketingProtocolModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SET_MARKETINGMODEL_OFFSET))(value);
		}

		static ::MiHoYo::SDK::ProtocolManager_MarketingProtocolModel* get_marketingModel()
		{
			return ((::MiHoYo::SDK::ProtocolManager_MarketingProtocolModel*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GET_MARKETINGMODEL_OFFSET))();
		}

		::System::Void RequestAgreementInfos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_REQUESTAGREEMENTINFOS_OFFSET))(this);
		}

		::System::Void RequestOperateAgreement(::System::String* operation)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_REQUESTOPERATEAGREEMENT_OFFSET))(this, operation);
		}

		::System::Void ClearMarketingModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_CLEARMARKETINGMODEL_OFFSET))(this);
		}

		::System::Void OnGetMarketingProtocolInfo(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONGETMARKETINGPROTOCOLINFO_OFFSET))(this, response);
		}

		::System::Void CheckOverseaShowProtocol()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_CHECKOVERSEASHOWPROTOCOL_OFFSET))(this);
		}

		::System::Void OnProtocolAccept()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONPROTOCOLACCEPT_OFFSET))(this);
		}

		::System::Void OnProtocolRefuse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONPROTOCOLREFUSE_OFFSET))(this);
		}

		::System::Void HideProtocol()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_HIDEPROTOCOL_OFFSET))(this);
		}

		::System::Boolean ShowProtocolPluginUI(::System::Boolean isUpdate, ::System::Action* onAccept, ::System::Action* onRefuse)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWPROTOCOLPLUGINUI_OFFSET))(this, isUpdate, onAccept, onRefuse);
		}

		::System::Void HideOverseaProtocol()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_HIDEOVERSEAPROTOCOL_OFFSET))(this);
		}

		::System::Boolean ShowOverseaProtocolPluginUI(::MiHoYo::SDK::ProtocolType protocolType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::ProtocolType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWOVERSEAPROTOCOLPLUGINUI_OFFSET))(this, protocolType);
		}

		::System::Void ShowProtocol(::System::Boolean isUpdate, ::System::Action* onAccept, ::System::Action* onRefuse)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWPROTOCOL_OFFSET))(this, isUpdate, onAccept, onRefuse);
		}

		::System::Void ShowOverseaProtocol(::MiHoYo::SDK::ProtocolType protocolType)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ProtocolType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWOVERSEAPROTOCOL_OFFSET))(this, protocolType);
		}

		::System::Void DeleteProtocolFlagsByAid(::System::String* aid)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_DELETEPROTOCOLFLAGSBYAID_OFFSET))(this, aid);
		}

		::System::String* GetNewProtocolShowFlagByAidAndLanguage(::System::String* aid, ::System::String* shortLanguageCode)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETNEWPROTOCOLSHOWFLAGBYAIDANDLANGUAGE_OFFSET))(this, aid, shortLanguageCode);
		}

		::System::String* GetProtocolVersionKeyByAidAndLanguage(::System::String* aid, ::System::String* shortLanguageCode)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOLVERSIONKEYBYAIDANDLANGUAGE_OFFSET))(this, aid, shortLanguageCode);
		}

		::System::Void OnAcceptUserAgreement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONACCEPTUSERAGREEMENT_OFFSET))(this);
		}

		::System::Void OnAcceptLaunchProtocol_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONACCEPTLAUNCHPROTOCOL_1_OFFSET))(this);
		}

		::System::Void OnRefuseUserAgreement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONREFUSEUSERAGREEMENT_OFFSET))(this);
		}

		::System::Void OnAcceptOverseaUserAgreement(::System::String* marketingStatus)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONACCEPTOVERSEAUSERAGREEMENT_OFFSET))(this, marketingStatus);
		}

		::System::Void OnRefuseOverseaUserAgreement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONREFUSEOVERSEAUSERAGREEMENT_OFFSET))(this);
		}

		::System::Void ShowUserAgreement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWUSERAGREEMENT_OFFSET))(this);
		}

		::System::Void ShowPrivacyProtocol()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWPRIVACYPROTOCOL_OFFSET))(this);
		}

		::System::Void ShowTeenagerUserAgreement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWTEENAGERUSERAGREEMENT_OFFSET))(this);
		}

		::System::Void ShowThirdPrivacy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWTHIRDPRIVACY_OFFSET))(this);
		}

		::System::Void OpenProtocolWebView(::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_OPENPROTOCOLWEBVIEW_OFFSET))(this, jsonString);
		}

		::System::Void ShowMarketingProtocol(::System::String* marketingURL)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWMARKETINGPROTOCOL_OFFSET))(this, marketingURL);
		}

		::System::Void ShowAccountUserAgreement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWACCOUNTUSERAGREEMENT_OFFSET))(this);
		}

		::System::Void ShowAccountPrivacyProtocol()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWACCOUNTPRIVACYPROTOCOL_OFFSET))(this);
		}

		::System::Void SetNewProcotol(::MiHoYo::SDK::JSONNode* protocol, ::System::String* accountKey)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SETNEWPROCOTOL_OFFSET))(this, protocol, accountKey);
		}

		::System::Void SetNewUserProtocolFlag(::MiHoYo::SDK::JSONNode* protocol, ::System::String* accountKey)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SETNEWUSERPROTOCOLFLAG_OFFSET))(this, protocol, accountKey);
		}

		::System::String* GetProtocolShowFlagKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOLSHOWFLAGKEY_OFFSET))(this);
		}

		::System::Void OnUniWebviewMessage(::MiHoYo::SDK::UniWebViewMessage message)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONUNIWEBVIEWMESSAGE_OFFSET))(this, message);
		}

		::System::Boolean CheckShowLaunchProtocol()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_CHECKSHOWLAUNCHPROTOCOL_OFFSET))(this);
		}

		::System::Void CheckShowLaunchProtocolCompliance(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_CHECKSHOWLAUNCHPROTOCOLCOMPLIANCE_OFFSET))(this, callback);
		}

		::System::Collections::IEnumerator* OnShowProtocolTimeout(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONSHOWPROTOCOLTIMEOUT_OFFSET))(this, callback);
		}

		::System::Void ShowProtocolViaShowFlag(::MiHoYo::SDK::JSONNode* jsonShowFlag, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWPROTOCOLVIASHOWFLAG_OFFSET))(this, jsonShowFlag, callback);
		}

		::System::Void RequestLaunchProtocol(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_REQUESTLAUNCHPROTOCOL_OFFSET))(this, callback);
		}

		::System::Void OnRequestLaunchProtocolVersion(::MiHoYo::SDK::NetworkResponseModel* response, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONREQUESTLAUNCHPROTOCOLVERSION_OFFSET))(this, response, callback);
		}

		::System::Void OnGetLaunchProtocol(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONGETLAUNCHPROTOCOL_OFFSET))(this, response);
		}

		::System::Boolean NeedUpdateProtocol(::MiHoYo::SDK::NetworkResponseModel* response, ::MiHoYo::SDK::JSONNode*& jsonProtocol)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*, ::MiHoYo::SDK::JSONNode*&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_NEEDUPDATEPROTOCOL_OFFSET))(this, response, jsonProtocol);
		}

		::MiHoYo::SDK::JSONNode* GetLaunchProtocolVersion()
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETLAUNCHPROTOCOLVERSION_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONNode* GetLaunchProtocolShowFlag()
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETLAUNCHPROTOCOLSHOWFLAG_OFFSET))(this);
		}

		::System::String* GetLaunchProtocolVersionKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETLAUNCHPROTOCOLVERSIONKEY_OFFSET))(this);
		}

		::System::String* GetLaunchProtocolShowFlagKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETLAUNCHPROTOCOLSHOWFLAGKEY_OFFSET))(this);
		}

		::System::Int32 GetLaunchProtocolTimeoutBoxConfig()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETLAUNCHPROTOCOLTIMEOUTBOXCONFIG_OFFSET))(this);
		}

		::System::Void _ShowOverseaProtocolPluginUI_b__46_0(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__46_0_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowOverseaProtocolPluginUI_b__46_1(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__46_1_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowOverseaProtocolPluginUI_b__46_2(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__46_2_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowOverseaProtocolPluginUI_b__46_3(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__46_3_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowOverseaProtocolPluginUI_b__46_4(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__46_4_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowOverseaProtocolPluginUI_b__46_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__46_6_OFFSET))(this);
		}

		::System::Void _ShowOverseaProtocolPluginUI_b__46_5(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__46_5_OFFSET))(this, strArgs, callback);
		}

		::System::Boolean _OnShowProtocolTimeout_b__73_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__ONSHOWPROTOCOLTIMEOUT_B__73_0_OFFSET))(this);
		}
	};
}
