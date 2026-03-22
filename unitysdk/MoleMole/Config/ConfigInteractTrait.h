#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_134;
class Class_1_236FD73ABC492E3F;
class Class_1_43BD383C98B4C0C5_40;
class Class_1_9BBA877A0A83A422;
namespace MoleMole { class InteractTraitData; }
namespace MoleMole::Config { class ConfigInteractInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1399AB90)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1399A4F0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_GET_EXCLUSIVEINTERACT_OFFSET UNITYSDK_OFFSET(0x1399B060)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_GET_INTERACTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1399B0E0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_GET_ISONCEONLY_OFFSET UNITYSDK_OFFSET(0x1399AFE0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_0A3C11864695AF2A_OFFSET UNITYSDK_OFFSET(0x1399B540)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x1399A0E0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x1399B8C0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_3662512A444949A2_OFFSET UNITYSDK_OFFSET(0x1399B930)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_45A2D426FEF1353D_OFFSET UNITYSDK_OFFSET(0x1399C070)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_51DEC44B986280C0_OFFSET UNITYSDK_OFFSET(0x1399B360)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x1399A070)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_81EB8C5FAF891D14_OFFSET UNITYSDK_OFFSET(0x1399BEB0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_963EAF25FF34C63B_OFFSET UNITYSDK_OFFSET(0x1399ABF0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x1399A1E0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_B9BDB4313A1FAFEC_OFFSET UNITYSDK_OFFSET(0x1399A310)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_C249FAD6F0D8AC50_OFFSET UNITYSDK_OFFSET(0x1399BF90)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x1399C1D0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_D1B06669EDE48AF6_OFFSET UNITYSDK_OFFSET(0x1399B150)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x1399A570)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_F588B74B42342C11_OFFSET UNITYSDK_OFFSET(0x1399BD00)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_FAD8C625325FB5D0_OFFSET UNITYSDK_OFFSET(0x1399BAD0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1399B4C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigInteractTrait_TypeDefinitionIndex = 66933;

	class ConfigInteractTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* InteractName; // 0x10
		::Foundation::AssetPath ConfigDataPath; // 0x18
		::System::Int32 CoopInteractMaxCount; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigInteractInfo*>* InteractGroup; // 0x30
		::Class_1_43BD383C98B4C0C5_40* _mainInteractRunData; // 0x38
		::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_40*>* _otherInteractRunDataList; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_B9BDB4313A1FAFEC(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_B9BDB4313A1FAFEC_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsOnceOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_GET_ISONCEONLY_OFFSET))(this);
		}

		::System::Boolean get_ExclusiveInteract()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_GET_EXCLUSIVEINTERACT_OFFSET))(this);
		}

		::System::Int32 get_InteractPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_GET_INTERACTPRIORITY_OFFSET))(this);
		}

		::System::Boolean Method_2_D1B06669EDE48AF6(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_D1B06669EDE48AF6_OFFSET))(this, a1);
		}

		static ::Class_1_43BD383C98B4C0C5_40* Method_2_0A3C11864695AF2A(::MoleMole::InteractTraitData*& a1, ::System::String*& a2)
		{
			return ((::Class_1_43BD383C98B4C0C5_40*(*)(::MoleMole::InteractTraitData*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_0A3C11864695AF2A_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		static ::System::Void Method_2_3662512A444949A2(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigInteractInfo*>*& a1, ::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_40*>*& a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigInteractInfo*>*&, ::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_40*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_3662512A444949A2_OFFSET))(a1, a2);
		}

		static ::MoleMole::Config::ConfigInteractTrait* Method_2_F588B74B42342C11(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigInteractTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_F588B74B42342C11_OFFSET))(a1, a2);
		}

		static ::Class_1_43BD383C98B4C0C5_40* Method_2_FAD8C625325FB5D0(::System::String*& a1, ::Foundation::AssetPath& a2, ::System::Action_1<::MoleMole::InteractTraitData*>* a3)
		{
			return ((::Class_1_43BD383C98B4C0C5_40*(*)(::System::String*&, ::Foundation::AssetPath&, ::System::Action_1<::MoleMole::InteractTraitData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_FAD8C625325FB5D0_OFFSET))(a1, a2, a3);
		}

		static ::MoleMole::Config::ConfigInteractTrait* Method_2_45A2D426FEF1353D(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigInteractTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_45A2D426FEF1353D_OFFSET))(a1);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_963EAF25FF34C63B(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_963EAF25FF34C63B_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_DF413489329CBAF8_OFFSET))(this, a1);
		}

		static ::System::Boolean Method_2_81EB8C5FAF891D14(::Foundation::AssetPath a1, ::Foundation::AssetRequestHandle& a2, ::MoleMole::InteractTraitData*& a3)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetRequestHandle&, ::MoleMole::InteractTraitData*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_81EB8C5FAF891D14_OFFSET))(a1, a2, a3);
		}

		::System::Void Method_2_51DEC44B986280C0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_51DEC44B986280C0_OFFSET))(this);
		}

		static ::MoleMole::InteractTraitData* Method_2_C249FAD6F0D8AC50(::Foundation::AssetPath a1, ::Foundation::AssetRequestHandle& a2)
		{
			return ((::MoleMole::InteractTraitData*(*)(::Foundation::AssetPath, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_METHOD_2_C249FAD6F0D8AC50_OFFSET))(a1, a2);
		}
	};
}
