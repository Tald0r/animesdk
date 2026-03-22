#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ConfigUrlModel.h"

namespace System { class String; }

#define MIHOYO_SDK_URLCONFIG_URL_GET_ABTESTPLAT_OFFSET UNITYSDK_OFFSET(0x18891300)
#define MIHOYO_SDK_URLCONFIG_URL_GET_ACCOUNTPRIVACYURL_OFFSET UNITYSDK_OFFSET(0x188912E0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_ACCOUNTUSERAGREEMENTURL_OFFSET UNITYSDK_OFFSET(0x188912D0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_ACKNEWERDEVICES_OFFSET UNITYSDK_OFFSET(0x18891210)
#define MIHOYO_SDK_URLCONFIG_URL_GET_AGELIMITURL_OFFSET UNITYSDK_OFFSET(0x18891120)
#define MIHOYO_SDK_URLCONFIG_URL_GET_APPLELOGINURL_OFFSET UNITYSDK_OFFSET(0x18890F40)
#define MIHOYO_SDK_URLCONFIG_URL_GET_BEFOREVERIFY_OFFSET UNITYSDK_OFFSET(0x18891030)
#define MIHOYO_SDK_URLCONFIG_URL_GET_BINDEMAIL_OFFSET UNITYSDK_OFFSET(0x18891170)
#define MIHOYO_SDK_URLCONFIG_URL_GET_BINDMOBILE_OFFSET UNITYSDK_OFFSET(0x18890E80)
#define MIHOYO_SDK_URLCONFIG_URL_GET_BINDREALNAME_OFFSET UNITYSDK_OFFSET(0x18890CD0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_BINDTHIRDPARTY_OFFSET UNITYSDK_OFFSET(0x18891010)
#define MIHOYO_SDK_URLCONFIG_URL_GET_BIND_OFFSET UNITYSDK_OFFSET(0x18890D30)
#define MIHOYO_SDK_URLCONFIG_URL_GET_CHECKORDER_OFFSET UNITYSDK_OFFSET(0x18890E60)
#define MIHOYO_SDK_URLCONFIG_URL_GET_CHECKPAY_OFFSET UNITYSDK_OFFSET(0x18891090)
#define MIHOYO_SDK_URLCONFIG_URL_GET_CHECKV2_OFFSET UNITYSDK_OFFSET(0x18891370)
#define MIHOYO_SDK_URLCONFIG_URL_GET_CHECK_OFFSET UNITYSDK_OFFSET(0x188911B0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_COMBOCONFIGCENTER_OFFSET UNITYSDK_OFFSET(0x188910E0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_COMBOCONFIG_OFFSET UNITYSDK_OFFSET(0x18890E00)
#define MIHOYO_SDK_URLCONFIG_URL_GET_COMBOCREATEORDER_OFFSET UNITYSDK_OFFSET(0x188910B0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_COMBOLOGIN_OFFSET UNITYSDK_OFFSET(0x18888220)
#define MIHOYO_SDK_URLCONFIG_URL_GET_COMPAREPROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x18891070)
#define MIHOYO_SDK_URLCONFIG_URL_GET_CONFIRMQRCODE_OFFSET UNITYSDK_OFFSET(0x18890DD0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_CONSOLEBINDTHIRDPARTYOS_OFFSET UNITYSDK_OFFSET(0x18891420)
#define MIHOYO_SDK_URLCONFIG_URL_GET_CONSOLECREATEACTIONTICKETOS_OFFSET UNITYSDK_OFFSET(0x188913D0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_CONSOLEGETBINDTICKETINFOOS_OFFSET UNITYSDK_OFFSET(0x188913E0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_CONSOLELOGINBYACTIONTICKETOS_OFFSET UNITYSDK_OFFSET(0x18891400)
#define MIHOYO_SDK_URLCONFIG_URL_GET_CONSOLEREACTIVATEACCOUNTOS_OFFSET UNITYSDK_OFFSET(0x18891410)
#define MIHOYO_SDK_URLCONFIG_URL_GET_CONSOLEVERIFYEMAILCAPTCHAOS_OFFSET UNITYSDK_OFFSET(0x188913F0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_CONSUMEALERTPIC_OFFSET UNITYSDK_OFFSET(0x188911F0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_CREATEORDER_OFFSET UNITYSDK_OFFSET(0x18890E40)
#define MIHOYO_SDK_URLCONFIG_URL_GET_DATAUPLOAD_OFFSET UNITYSDK_OFFSET(0x18890FF0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_DEVICEVERIFYDESCURL_OFFSET UNITYSDK_OFFSET(0x188911D0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_EMAILCAPTCHA_OFFSET UNITYSDK_OFFSET(0x18891180)
#define MIHOYO_SDK_URLCONFIG_URL_GET_FACEBOOKLOGINURL_OFFSET UNITYSDK_OFFSET(0x18890F30)
#define MIHOYO_SDK_URLCONFIG_URL_GET_FETCHQRCODE_OFFSET UNITYSDK_OFFSET(0x18890D70)
#define MIHOYO_SDK_URLCONFIG_URL_GET_FORGETPASSWORDOVERSEA_OFFSET UNITYSDK_OFFSET(0x18890F20)
#define MIHOYO_SDK_URLCONFIG_URL_GET_FORGETPASSWORD_OFFSET UNITYSDK_OFFSET(0x18890D60)
#define MIHOYO_SDK_URLCONFIG_URL_GET_GETAGREEMENTINFOS_OFFSET UNITYSDK_OFFSET(0x18891130)
#define MIHOYO_SDK_URLCONFIG_URL_GET_GETALERTPIC_OFFSET UNITYSDK_OFFSET(0x188911E0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_GETCROSSTOKENURLBYSTOKEN_OFFSET UNITYSDK_OFFSET(0x18891350)
#define MIHOYO_SDK_URLCONFIG_URL_GET_GETEXTLIST_OFFSET UNITYSDK_OFFSET(0x18891310)
#define MIHOYO_SDK_URLCONFIG_URL_GET_GOOGLELOGINURL_OFFSET UNITYSDK_OFFSET(0x18890F50)
#define MIHOYO_SDK_URLCONFIG_URL_GET_GRANT_OFFSET UNITYSDK_OFFSET(0x18890E90)
#define MIHOYO_SDK_URLCONFIG_URL_GET_GUESTLOGIN_OFFSET UNITYSDK_OFFSET(0x18890D10)
#define MIHOYO_SDK_URLCONFIG_URL_GET_KRAUTHENTICATIONURL_OFFSET UNITYSDK_OFFSET(0x18891040)
#define MIHOYO_SDK_URLCONFIG_URL_GET_LISTNEWERDEVICES_OFFSET UNITYSDK_OFFSET(0x18891200)
#define MIHOYO_SDK_URLCONFIG_URL_GET_LISTPAYPLAT_OFFSET UNITYSDK_OFFSET(0x18890ED0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_LISTPRICETIERV2_OFFSET UNITYSDK_OFFSET(0x18891330)
#define MIHOYO_SDK_URLCONFIG_URL_GET_LISTPRICETIER_OFFSET UNITYSDK_OFFSET(0x18890EB0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_LOADCONFIG_OFFSET UNITYSDK_OFFSET(0x18890C70)
#define MIHOYO_SDK_URLCONFIG_URL_GET_LOGINMOBILE_OFFSET UNITYSDK_OFFSET(0x18890C90)
#define MIHOYO_SDK_URLCONFIG_URL_GET_MAILREGISTEROVERSEA_OFFSET UNITYSDK_OFFSET(0x18890F10)
#define MIHOYO_SDK_URLCONFIG_URL_GET_MOBILEREGISTER_OFFSET UNITYSDK_OFFSET(0x18890D50)
#define MIHOYO_SDK_URLCONFIG_URL_GET_MULTILANGUAGEDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x18890E30)
#define MIHOYO_SDK_URLCONFIG_URL_GET_MULTILANGUAGEVERSIONCHECK_OFFSET UNITYSDK_OFFSET(0x18890E20)
#define MIHOYO_SDK_URLCONFIG_URL_GET_OPERATEAGREEMENT_OFFSET UNITYSDK_OFFSET(0x18891150)
#define MIHOYO_SDK_URLCONFIG_URL_GET_PAYADYENURL_OFFSET UNITYSDK_OFFSET(0x18891060)
#define MIHOYO_SDK_URLCONFIG_URL_GET_PAYDIALOGABTEST_OFFSET UNITYSDK_OFFSET(0x188912F0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_PAYPALURL_OFFSET UNITYSDK_OFFSET(0x18891050)
#define MIHOYO_SDK_URLCONFIG_URL_GET_PING2_OFFSET UNITYSDK_OFFSET(0x18890EF0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_PING_OFFSET UNITYSDK_OFFSET(0x18890EE0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_PRELOADURL_OFFSET UNITYSDK_OFFSET(0x188910D0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_PS4BINDEMAIL_OFFSET UNITYSDK_OFFSET(0x188913A0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_PSCREATEACTIONTICKETCN_OFFSET UNITYSDK_OFFSET(0x188913C0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_PSDETECTCHECK_OFFSET UNITYSDK_OFFSET(0x18890FE0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_QUERYQRCODE_OFFSET UNITYSDK_OFFSET(0x18890D90)
#define MIHOYO_SDK_URLCONFIG_URL_GET_REACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x18891190)
#define MIHOYO_SDK_URLCONFIG_URL_GET_REALPEOPLEHELP_OFFSET UNITYSDK_OFFSET(0x188912B0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_REALPEOPLERULE_OFFSET UNITYSDK_OFFSET(0x188912C0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_REGISTER_OFFSET UNITYSDK_OFFSET(0x18890D40)
#define MIHOYO_SDK_URLCONFIG_URL_GET_REPORTDATA_OFFSET UNITYSDK_OFFSET(0x18890DF0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_SCANQRCODE_OFFSET UNITYSDK_OFFSET(0x18890DB0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_SDKDATAUPLOAD_OFFSET UNITYSDK_OFFSET(0x18891000)
#define MIHOYO_SDK_URLCONFIG_URL_GET_SONYBINDPHONEURL_OFFSET UNITYSDK_OFFSET(0x18891220)
#define MIHOYO_SDK_URLCONFIG_URL_GET_SWCONFIG_OFFSET UNITYSDK_OFFSET(0x18891100)
#define MIHOYO_SDK_URLCONFIG_URL_GET_TEENAGERUSERPROTOCALURL_OFFSET UNITYSDK_OFFSET(0x18890FB0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_THIRDLOGINFOREIGN_OFFSET UNITYSDK_OFFSET(0x18890F60)
#define MIHOYO_SDK_URLCONFIG_URL_GET_TICKETBYTOKEN_OFFSET UNITYSDK_OFFSET(0x18890CB0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_TOKENVERIFY_OFFSET UNITYSDK_OFFSET(0x18890CF0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_TWITTERLOGINURL_OFFSET UNITYSDK_OFFSET(0x18890F80)
#define MIHOYO_SDK_URLCONFIG_URL_GET_USERPRIVACYURLV2_OFFSET UNITYSDK_OFFSET(0x18890FD0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_USERPRIVACYURL_OFFSET UNITYSDK_OFFSET(0x18890FC0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_USERPROTOCALURLV2_OFFSET UNITYSDK_OFFSET(0x18890FA0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_USERPROTOCALURL_OFFSET UNITYSDK_OFFSET(0x18890F90)
#define MIHOYO_SDK_URLCONFIG_URL_GET_VERIFYACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x188913B0)
#define MIHOYO_SDK_URLCONFIG_URL_GET_WATERMARKINFOURL_OFFSET UNITYSDK_OFFSET(0x18891390)
#define MIHOYO_SDK_URLCONFIG_URL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18890B50)
#define MIHOYO_SDK_URLCONFIG_URL__CTOR_OFFSET UNITYSDK_OFFSET(0x18890B40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int URLConfig_URL_TypeDefinitionIndex = 18092;

	class URLConfig_URL : public ::MiHoYo::SDK::ConfigUrlModel
	{
	public:
		::System::String* bindSafeMobile; // 0x660
		::System::String* reportKey; // 0x668

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::ConfigUrlModel* baseUrl)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ConfigUrlModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL__CTOR_1_OFFSET))(this, baseUrl);
		}

		::System::String* get_loadConfig()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_LOADCONFIG_OFFSET))(this);
		}

		::System::String* get_loginMobile()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_LOGINMOBILE_OFFSET))(this);
		}

		::System::String* get_ticketByToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_TICKETBYTOKEN_OFFSET))(this);
		}

		::System::String* get_bindRealName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_BINDREALNAME_OFFSET))(this);
		}

		::System::String* get_tokenVerify()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_TOKENVERIFY_OFFSET))(this);
		}

		::System::String* get_guestLogin()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_GUESTLOGIN_OFFSET))(this);
		}

		::System::String* get_bind()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_BIND_OFFSET))(this);
		}

		::System::String* get_register()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_REGISTER_OFFSET))(this);
		}

		::System::String* get_mobileRegister()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_MOBILEREGISTER_OFFSET))(this);
		}

		::System::String* get_forgetPassword()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_FORGETPASSWORD_OFFSET))(this);
		}

		::System::String* get_fetchQRCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_FETCHQRCODE_OFFSET))(this);
		}

		::System::String* get_queryQRCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_QUERYQRCODE_OFFSET))(this);
		}

		::System::String* get_scanQRCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_SCANQRCODE_OFFSET))(this);
		}

		::System::String* get_confirmQRCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_CONFIRMQRCODE_OFFSET))(this);
		}

		::System::String* get_reportData()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_REPORTDATA_OFFSET))(this);
		}

		::System::String* get_comboLogin()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_COMBOLOGIN_OFFSET))(this);
		}

		::System::String* get_comboConfig()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_COMBOCONFIG_OFFSET))(this);
		}

		::System::String* get_multiLanguageVersionCheck()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_MULTILANGUAGEVERSIONCHECK_OFFSET))(this);
		}

		::System::String* get_multiLanguageDownload()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_MULTILANGUAGEDOWNLOAD_OFFSET))(this);
		}

		::System::String* get_createOrder()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_CREATEORDER_OFFSET))(this);
		}

		::System::String* get_checkOrder()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_CHECKORDER_OFFSET))(this);
		}

		::System::String* get_bindMobile()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_BINDMOBILE_OFFSET))(this);
		}

		::System::String* get_grant()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_GRANT_OFFSET))(this);
		}

		::System::String* get_listPriceTier()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_LISTPRICETIER_OFFSET))(this);
		}

		::System::String* get_listPayPlat()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_LISTPAYPLAT_OFFSET))(this);
		}

		::System::String* get_ping()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_PING_OFFSET))(this);
		}

		::System::String* get_ping2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_PING2_OFFSET))(this);
		}

		::System::String* get_mailRegisterOversea()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_MAILREGISTEROVERSEA_OFFSET))(this);
		}

		::System::String* get_forgetPasswordOversea()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_FORGETPASSWORDOVERSEA_OFFSET))(this);
		}

		::System::String* get_facebookLoginURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_FACEBOOKLOGINURL_OFFSET))(this);
		}

		::System::String* get_appleLoginURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_APPLELOGINURL_OFFSET))(this);
		}

		::System::String* get_googleLoginURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_GOOGLELOGINURL_OFFSET))(this);
		}

		::System::String* get_thirdLoginForeign()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_THIRDLOGINFOREIGN_OFFSET))(this);
		}

		::System::String* get_twitterLoginURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_TWITTERLOGINURL_OFFSET))(this);
		}

		::System::String* get_userProtocalURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_USERPROTOCALURL_OFFSET))(this);
		}

		::System::String* get_userProtocalURLV2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_USERPROTOCALURLV2_OFFSET))(this);
		}

		::System::String* get_teenagerUserProtocalURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_TEENAGERUSERPROTOCALURL_OFFSET))(this);
		}

		::System::String* get_userPrivacyURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_USERPRIVACYURL_OFFSET))(this);
		}

		::System::String* get_userPrivacyURLV2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_USERPRIVACYURLV2_OFFSET))(this);
		}

		::System::String* get_psDetectCheck()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_PSDETECTCHECK_OFFSET))(this);
		}

		::System::String* get_dataUpload()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_DATAUPLOAD_OFFSET))(this);
		}

		::System::String* get_sdkDataUpload()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_SDKDATAUPLOAD_OFFSET))(this);
		}

		::System::String* get_bindThirdparty()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_BINDTHIRDPARTY_OFFSET))(this);
		}

		::System::String* get_beforeVerify()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_BEFOREVERIFY_OFFSET))(this);
		}

		::System::String* get_krAuthenticationURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_KRAUTHENTICATIONURL_OFFSET))(this);
		}

		::System::String* get_paypalURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_PAYPALURL_OFFSET))(this);
		}

		::System::String* get_payAdyenURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_PAYADYENURL_OFFSET))(this);
		}

		::System::String* get_compareProtocolVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_COMPAREPROTOCOLVERSION_OFFSET))(this);
		}

		::System::String* get_checkPay()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_CHECKPAY_OFFSET))(this);
		}

		::System::String* get_comboCreateOrder()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_COMBOCREATEORDER_OFFSET))(this);
		}

		::System::String* get_preloadURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_PRELOADURL_OFFSET))(this);
		}

		::System::String* get_comboConfigCenter()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_COMBOCONFIGCENTER_OFFSET))(this);
		}

		::System::String* get_swConfig()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_SWCONFIG_OFFSET))(this);
		}

		::System::String* get_ageLimitURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_AGELIMITURL_OFFSET))(this);
		}

		::System::String* get_getAgreementInfos()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_GETAGREEMENTINFOS_OFFSET))(this);
		}

		::System::String* get_operateAgreement()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_OPERATEAGREEMENT_OFFSET))(this);
		}

		::System::String* get_bindEmail()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_BINDEMAIL_OFFSET))(this);
		}

		::System::String* get_emailCaptcha()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_EMAILCAPTCHA_OFFSET))(this);
		}

		::System::String* get_reactivateAccount()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_REACTIVATEACCOUNT_OFFSET))(this);
		}

		::System::String* get_check()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_CHECK_OFFSET))(this);
		}

		::System::String* get_deviceVerifyDescURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_DEVICEVERIFYDESCURL_OFFSET))(this);
		}

		::System::String* get_getAlertPic()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_GETALERTPIC_OFFSET))(this);
		}

		::System::String* get_consumeAlertPic()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_CONSUMEALERTPIC_OFFSET))(this);
		}

		::System::String* get_listNewerDevices()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_LISTNEWERDEVICES_OFFSET))(this);
		}

		::System::String* get_ackNewerDevices()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_ACKNEWERDEVICES_OFFSET))(this);
		}

		::System::String* get_sonyBindPhoneURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_SONYBINDPHONEURL_OFFSET))(this);
		}

		::System::String* get_realPeopleHelp()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_REALPEOPLEHELP_OFFSET))(this);
		}

		::System::String* get_realPeopleRule()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_REALPEOPLERULE_OFFSET))(this);
		}

		::System::String* get_accountUserAgreementUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_ACCOUNTUSERAGREEMENTURL_OFFSET))(this);
		}

		::System::String* get_accountPrivacyUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_ACCOUNTPRIVACYURL_OFFSET))(this);
		}

		::System::String* get_payDialogABTest()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_PAYDIALOGABTEST_OFFSET))(this);
		}

		::System::String* get_abtestPlat()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_ABTESTPLAT_OFFSET))(this);
		}

		::System::String* get_getExtList()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_GETEXTLIST_OFFSET))(this);
		}

		::System::String* get_listPriceTierV2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_LISTPRICETIERV2_OFFSET))(this);
		}

		::System::String* get_getCrossTokenUrlBySToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_GETCROSSTOKENURLBYSTOKEN_OFFSET))(this);
		}

		::System::String* get_checkV2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_CHECKV2_OFFSET))(this);
		}

		::System::String* get_watermarkInfoURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_WATERMARKINFOURL_OFFSET))(this);
		}

		::System::String* get_ps4BindEmail()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_PS4BINDEMAIL_OFFSET))(this);
		}

		::System::String* get_verifyActionTicket()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_VERIFYACTIONTICKET_OFFSET))(this);
		}

		::System::String* get_psCreateActionTicketCN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_PSCREATEACTIONTICKETCN_OFFSET))(this);
		}

		::System::String* get_consoleCreateActionTicketOS()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_CONSOLECREATEACTIONTICKETOS_OFFSET))(this);
		}

		::System::String* get_consoleGetBindTicketInfoOS()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_CONSOLEGETBINDTICKETINFOOS_OFFSET))(this);
		}

		::System::String* get_consoleVerifyEmailCaptchaOS()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_CONSOLEVERIFYEMAILCAPTCHAOS_OFFSET))(this);
		}

		::System::String* get_consoleLoginByActionTicketOS()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_CONSOLELOGINBYACTIONTICKETOS_OFFSET))(this);
		}

		::System::String* get_consoleReactivateAccountOS()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_CONSOLEREACTIVATEACCOUNTOS_OFFSET))(this);
		}

		::System::String* get_consoleBindThirdPartyOS()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_URL_GET_CONSOLEBINDTHIRDPARTYOS_OFFSET))(this);
		}
	};
}
