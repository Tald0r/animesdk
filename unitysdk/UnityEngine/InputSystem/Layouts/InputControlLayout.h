#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputControlLayout_Cache.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputControlLayout_CacheRefInstance.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputControlLayout_Collection.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputControlLayout_ControlItem.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputControlLayout_Flags.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputDeviceMatcher.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/FourCC.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InlinedArray_1.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MemberInfo; }
namespace UnityEngine::InputSystem::Layouts { class InputControlAttribute; }

#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_ADDCONTROLITEMSFROMFIELDS_OFFSET UNITYSDK_OFFSET(0x19DA3880)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_ADDCONTROLITEMSFROMMEMBERS_OFFSET UNITYSDK_OFFSET(0x19DA3940)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_ADDCONTROLITEMSFROMMEMBER_OFFSET UNITYSDK_OFFSET(0x19DA3DF0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_ADDCONTROLITEMSFROMPROPERTIES_OFFSET UNITYSDK_OFFSET(0x19DA38E0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_ADDCONTROLITEMS_OFFSET UNITYSDK_OFFSET(0x19DA3680)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CACHEREF_OFFSET UNITYSDK_OFFSET(0x19DA7400)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CREATECONTROLITEMFROMMEMBER_OFFSET UNITYSDK_OFFSET(0x19DA3FE0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CREATELOOKUPTABLEFORCONTROLS_OFFSET UNITYSDK_OFFSET(0x19DA64F0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_FINDCONTROLINCLUDINGARRAYELEMENTS_OFFSET UNITYSDK_OFFSET(0x19DA2CE0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_FINDCONTROL_OFFSET UNITYSDK_OFFSET(0x19DA2B50)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x19DA3850)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_FROMTYPE_OFFSET UNITYSDK_OFFSET(0x19DA31D0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GETVALUETYPE_OFFSET UNITYSDK_OFFSET(0x19DA3180)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_APPLIEDOVERRIDES_OFFSET UNITYSDK_OFFSET(0x19DA2730)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_BASELAYOUTS_OFFSET UNITYSDK_OFFSET(0x19DA26E0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_CACHE_OFFSET UNITYSDK_OFFSET(0x19DA73D0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_CANRUNINBACKGROUND_OFFSET UNITYSDK_OFFSET(0x19DA2950)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_COMMONUSAGES_OFFSET UNITYSDK_OFFSET(0x19DA2780)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_CONTROLS_OFFSET UNITYSDK_OFFSET(0x19DA27B0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_DEFAULTVARIANT_OFFSET UNITYSDK_OFFSET(0x19DA2630)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x19DA2680)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_HIDEINUI_OFFSET UNITYSDK_OFFSET(0x19DA2920)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_ISCONTROLLAYOUT_OFFSET UNITYSDK_OFFSET(0x19DA2860)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_ISDEVICELAYOUT_OFFSET UNITYSDK_OFFSET(0x19DA2800)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_ISGENERICTYPEOFDEVICE_OFFSET UNITYSDK_OFFSET(0x19DA28F0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_ISOVERRIDE_OFFSET UNITYSDK_OFFSET(0x19DA28C0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19DA29B0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19DA2670)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_STATEFORMAT_OFFSET UNITYSDK_OFFSET(0x19DA26C0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_STATESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x19DA26D0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x19DA26A0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_UPDATEBEFORERENDER_OFFSET UNITYSDK_OFFSET(0x19DA27E0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_VARIANTS_OFFSET UNITYSDK_OFFSET(0x19DA26B0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_INFERLAYOUTFROMVALUETYPE_OFFSET UNITYSDK_OFFSET(0x19DA49F0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_MERGELAYOUT_OFFSET UNITYSDK_OFFSET(0x19DA4D70)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_PARSEHEADERFIELDSFROMJSON_OFFSET UNITYSDK_OFFSET(0x19DA6C30)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_SET_CANRUNINBACKGROUND_OFFSET UNITYSDK_OFFSET(0x19DA2970)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_SET_HIDEINUI_OFFSET UNITYSDK_OFFSET(0x19DA2930)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_SET_ISGENERICTYPEOFDEVICE_OFFSET UNITYSDK_OFFSET(0x19DA2900)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_SET_ISOVERRIDE_OFFSET UNITYSDK_OFFSET(0x19DA28D0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_TOJSON_OFFSET UNITYSDK_OFFSET(0x19DA3780)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_VARIANTSMATCH_1_OFFSET UNITYSDK_OFFSET(0x19DA6AD0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_VARIANTSMATCH_OFFSET UNITYSDK_OFFSET(0x19DA6BF0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DA7430)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x19DA3740)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT__MERGELAYOUT_B__74_0_OFFSET UNITYSDK_OFFSET(0x19DA7470)

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputControlLayout_TypeDefinitionIndex = 27862;

	class InputControlLayout : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache* StaticGet_s_CacheInstance()
		{
			return (::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache*)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout_TypeDefinitionIndex)->GetStaticField(0x1FC80);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_s_DefaultVariant()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout_TypeDefinitionIndex)->GetStaticField(0x1FC88);
		}
		static ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection* StaticGet_s_Layouts()
		{
			return (::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection*)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout_TypeDefinitionIndex)->GetStaticField(0x1FC98);
		}
		static ::System::Int32* StaticGet_s_CacheInstanceRef()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout_TypeDefinitionIndex)->GetStaticField(0x4BB0);
		}
		// static const ::System::String* VariantSeparator; // 0x0
		::Il2CppArray<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>* m_Controls; // 0x10
		::UnityEngine::InputSystem::Utilities::InternedString m_Variants; // 0x18
		::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> m_AppliedOverrides; // 0x28
		::UnityEngine::InputSystem::Utilities::InternedString m_Name; // 0x48
		::Il2CppArray<::UnityEngine::InputSystem::Utilities::InternedString>* m_CommonUsages; // 0x58
		::System::String* m_DisplayName; // 0x60
		::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> m_BaseLayouts; // 0x68
		::System::Type* m_Type; // 0x88
		::System::String* m_Description; // 0x90
		::System::Nullable_1<::System::Boolean> m_UpdateBeforeRender; // 0x98
		::UnityEngine::InputSystem::Layouts::InputControlLayout_Flags m_Flags; // 0x9C
		::UnityEngine::InputSystem::Utilities::FourCC m_StateFormat; // 0xA0
		::System::Int32 m_StateSizeInBytes; // 0xA4

		::System::Void _ctor(::System::String* name, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT__CTOR_OFFSET))(this, name, type);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT__CCTOR_OFFSET))();
		}

		static ::UnityEngine::InputSystem::Utilities::InternedString get_DefaultVariant()
		{
			return ((::UnityEngine::InputSystem::Utilities::InternedString(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_DEFAULTVARIANT_OFFSET))();
		}

		::UnityEngine::InputSystem::Utilities::InternedString get_name()
		{
			return ((::UnityEngine::InputSystem::Utilities::InternedString(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_NAME_OFFSET))(this);
		}

		::System::String* get_displayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Type* get_type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_TYPE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::InternedString get_variants()
		{
			return ((::UnityEngine::InputSystem::Utilities::InternedString(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_VARIANTS_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::FourCC get_stateFormat()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_STATEFORMAT_OFFSET))(this);
		}

		::System::Int32 get_stateSizeInBytes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_STATESIZEINBYTES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* get_baseLayouts()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_BASELAYOUTS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* get_appliedOverrides()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_APPLIEDOVERRIDES_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> get_commonUsages()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_COMMONUSAGES_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> get_controls()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_CONTROLS_OFFSET))(this);
		}

		::System::Boolean get_updateBeforeRender()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_UPDATEBEFORERENDER_OFFSET))(this);
		}

		::System::Boolean get_isDeviceLayout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_ISDEVICELAYOUT_OFFSET))(this);
		}

		::System::Boolean get_isControlLayout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_ISCONTROLLAYOUT_OFFSET))(this);
		}

		::System::Boolean get_isOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_ISOVERRIDE_OFFSET))(this);
		}

		::System::Void set_isOverride(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_SET_ISOVERRIDE_OFFSET))(this, value);
		}

		::System::Boolean get_isGenericTypeOfDevice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_ISGENERICTYPEOFDEVICE_OFFSET))(this);
		}

		::System::Void set_isGenericTypeOfDevice(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_SET_ISGENERICTYPEOFDEVICE_OFFSET))(this, value);
		}

		::System::Boolean get_hideInUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_HIDEINUI_OFFSET))(this);
		}

		::System::Void set_hideInUI(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_SET_HIDEINUI_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Boolean> get_canRunInBackground()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_CANRUNINBACKGROUND_OFFSET))(this);
		}

		::System::Void set_canRunInBackground(::System::Nullable_1<::System::Boolean> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_SET_CANRUNINBACKGROUND_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem get_Item(::System::String* path)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_ITEM_OFFSET))(this, path);
		}

		::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> FindControl(::UnityEngine::InputSystem::Utilities::InternedString path)
		{
			return ((::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_FINDCONTROL_OFFSET))(this, path);
		}

		::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> FindControlIncludingArrayElements(::System::String* path, ::System::Int32& arrayIndex)
		{
			return ((::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_FINDCONTROLINCLUDINGARRAYELEMENTS_OFFSET))(this, path, arrayIndex);
		}

		::System::Type* GetValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GETVALUETYPE_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::Layouts::InputControlLayout* FromType(::System::String* name, ::System::Type* type)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_FROMTYPE_OFFSET))(name, type);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_TOJSON_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::Layouts::InputControlLayout* FromJson(::System::String* json)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_FROMJSON_OFFSET))(json);
		}

		static ::System::Void AddControlItems(::System::Type* type, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>* controlLayouts, ::System::String* layoutName)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_ADDCONTROLITEMS_OFFSET))(type, controlLayouts, layoutName);
		}

		static ::System::Void AddControlItemsFromFields(::System::Type* type, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>* controlLayouts, ::System::String* layoutName)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_ADDCONTROLITEMSFROMFIELDS_OFFSET))(type, controlLayouts, layoutName);
		}

		static ::System::Void AddControlItemsFromProperties(::System::Type* type, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>* controlLayouts, ::System::String* layoutName)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_ADDCONTROLITEMSFROMPROPERTIES_OFFSET))(type, controlLayouts, layoutName);
		}

		static ::System::Void AddControlItemsFromMembers(::Il2CppArray<::System::Reflection::MemberInfo*>* members, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>* controlItems, ::System::String* layoutName)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Reflection::MemberInfo*>*, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_ADDCONTROLITEMSFROMMEMBERS_OFFSET))(members, controlItems, layoutName);
		}

		static ::System::Void AddControlItemsFromMember(::System::Reflection::MemberInfo* member, ::Il2CppArray<::UnityEngine::InputSystem::Layouts::InputControlAttribute*>* attributes, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>* controlItems)
		{
			return ((::System::Void(*)(::System::Reflection::MemberInfo*, ::Il2CppArray<::UnityEngine::InputSystem::Layouts::InputControlAttribute*>*, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_ADDCONTROLITEMSFROMMEMBER_OFFSET))(member, attributes, controlItems);
		}

		static ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem CreateControlItemFromMember(::System::Reflection::MemberInfo* member, ::UnityEngine::InputSystem::Layouts::InputControlAttribute* attribute)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem(*)(::System::Reflection::MemberInfo*, ::UnityEngine::InputSystem::Layouts::InputControlAttribute*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CREATECONTROLITEMFROMMEMBER_OFFSET))(member, attribute);
		}

		static ::System::String* InferLayoutFromValueType(::System::Type* type)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_INFERLAYOUTFROMVALUETYPE_OFFSET))(type);
		}

		::System::Void MergeLayout(::UnityEngine::InputSystem::Layouts::InputControlLayout* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Layouts::InputControlLayout*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_MERGELAYOUT_OFFSET))(this, other);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>* CreateLookupTableForControls(::Il2CppArray<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>* controlItems, ::System::Collections::Generic::List_1<::System::String*>* variants)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*(*)(::Il2CppArray<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CREATELOOKUPTABLEFORCONTROLS_OFFSET))(controlItems, variants);
		}

		static ::System::Boolean VariantsMatch(::UnityEngine::InputSystem::Utilities::InternedString expected, ::UnityEngine::InputSystem::Utilities::InternedString actual)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_VARIANTSMATCH_OFFSET))(expected, actual);
		}

		static ::System::Boolean VariantsMatch_1(::System::String* expected, ::System::String* actual)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_VARIANTSMATCH_1_OFFSET))(expected, actual);
		}

		static ::System::Void ParseHeaderFieldsFromJson(::System::String* json, ::UnityEngine::InputSystem::Utilities::InternedString& name, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>& baseLayouts, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher& deviceMatcher)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString&, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>&, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_PARSEHEADERFIELDSFROMJSON_OFFSET))(json, name, baseLayouts, deviceMatcher);
		}

		static ::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache& get_cache()
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache&(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_GET_CACHE_OFFSET))();
		}

		static ::UnityEngine::InputSystem::Layouts::InputControlLayout_CacheRefInstance CacheRef()
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_CacheRefInstance(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CACHEREF_OFFSET))();
		}

		::System::Boolean _MergeLayout_b__74_0(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT__MERGELAYOUT_B__74_0_OFFSET))(this, x);
		}
	};
}
