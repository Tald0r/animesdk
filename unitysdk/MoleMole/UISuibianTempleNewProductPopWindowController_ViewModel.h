#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_0_16E4307DCC419505_103;
template <typename T> class Class_0_16E4307DCC41950C_12;

#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL_GETREACTIONS_OFFSET UNITYSDK_OFFSET(0xBEC3760)
#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL_GETREPUTATIONS_OFFSET UNITYSDK_OFFSET(0xBEC3C60)
#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xBEC31A0)
#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL_SETPRODUCTID_OFFSET UNITYSDK_OFFSET(0xBEC3D90)
#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL_SETREACTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xBEC3ED0)
#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xBEC4010)
#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__7_0_OFFSET UNITYSDK_OFFSET(0xBEC4090)
#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__7_1_OFFSET UNITYSDK_OFFSET(0xBEC4170)
#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__7_2_OFFSET UNITYSDK_OFFSET(0xBEC4250)
#define MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__7_3_OFFSET UNITYSDK_OFFSET(0xBEC4330)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleNewProductPopWindowController_ViewModel_TypeDefinitionIndex = 76688;

	class UISuibianTempleNewProductPopWindowController_ViewModel : public ::Class_1_F57C3EEEB03201AF
	{
	public:
		::Class_0_16E4307DCC419505_103<::System::Int32>* productID; // 0x60
		::Class_0_16E4307DCC41950C_12<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*>* reactions; // 0x68
		::Class_0_16E4307DCC41950C_12<::System::Int32>* reputation; // 0x70
		::Class_0_16E4307DCC41950C_12<::System::String*>* name; // 0x78
		::Class_0_16E4307DCC41950C_12<::System::Int32>* price; // 0x80
		::Class_0_16E4307DCC419505_103<::System::Int32>* reactionCount; // 0x88
		::Class_0_16E4307DCC41950C_12<::Foundation::AssetPath>* icon; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* GetReactions()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL_GETREACTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetReputations(::System::Int32 totalReputation, ::System::Collections::Generic::List_1<::System::Int32>* weights)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL_GETREPUTATIONS_OFFSET))(this, totalReputation, weights);
		}

		::System::Void SetProductID(::System::Int32 productID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL_SETPRODUCTID_OFFSET))(this, productID);
		}

		::System::Void SetReactionCount(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL_SETREACTIONCOUNT_OFFSET))(this, count);
		}

		::System::String* _OnCreateProperty_b__7_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__7_0_OFFSET))(this);
		}

		::System::Int32 _OnCreateProperty_b__7_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__7_1_OFFSET))(this);
		}

		::System::Int32 _OnCreateProperty_b__7_2()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__7_2_OFFSET))(this);
		}

		::Foundation::AssetPath _OnCreateProperty_b__7_3()
		{
			return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLENEWPRODUCTPOPWINDOWCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__7_3_OFFSET))(this);
		}
	};
}
