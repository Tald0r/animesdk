#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputControlLayout_Builder_ControlBuilder.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputControlLayout_ControlItem.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/FourCC.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine::InputSystem::Layouts { class InputControlLayout; }

#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_ADDCONTROL_OFFSET UNITYSDK_OFFSET(0x1A50CBD0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x1A50CE10)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_EXTEND_OFFSET UNITYSDK_OFFSET(0x1A50CDF0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_GET_CONTROLS_OFFSET UNITYSDK_OFFSET(0x1A50CBB0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1A50CAE0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_GET_EXTENDSLAYOUT_OFFSET UNITYSDK_OFFSET(0x1A50CB60)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A50CAC0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_GET_STATEFORMAT_OFFSET UNITYSDK_OFFSET(0x1A50CB20)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_GET_STATESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x1A50CB40)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1A50CB00)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_GET_UPDATEBEFORERENDER_OFFSET UNITYSDK_OFFSET(0x1A50CB90)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1A50CAF0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_SET_EXTENDSLAYOUT_OFFSET UNITYSDK_OFFSET(0x1A50CB70)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1A50CAD0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_SET_STATEFORMAT_OFFSET UNITYSDK_OFFSET(0x1A50CB30)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_SET_STATESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x1A50CB50)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1A50CB10)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_SET_UPDATEBEFORERENDER_OFFSET UNITYSDK_OFFSET(0x1A50CBA0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_WITHDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1A50CD90)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_WITHFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1A50CDB0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_WITHFORMAT_OFFSET UNITYSDK_OFFSET(0x1A50CDA0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_WITHNAME_OFFSET UNITYSDK_OFFSET(0x1A50CD80)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_WITHSIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x1A50CDE0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A50CFB0)

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputControlLayout_Builder_TypeDefinitionIndex = 27865;

	class InputControlLayout_Builder : public ::System::Object
	{
	public:
		::System::Type* _type_k__BackingField; // 0x10
		::Il2CppArray<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>* m_Controls; // 0x18
		::System::String* _displayName_k__BackingField; // 0x20
		::System::String* _name_k__BackingField; // 0x28
		::System::String* m_ExtendsLayout; // 0x30
		::System::Int32 m_ControlCount; // 0x38
		::System::Nullable_1<::System::Boolean> _updateBeforeRender_k__BackingField; // 0x3C
		::System::Int32 _stateSizeInBytes_k__BackingField; // 0x40
		::UnityEngine::InputSystem::Utilities::FourCC _stateFormat_k__BackingField; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_GET_NAME_OFFSET))(this);
		}

		::System::Void set_name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_displayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_displayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_SET_DISPLAYNAME_OFFSET))(this, value);
		}

		::System::Type* get_type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_type(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_SET_TYPE_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Utilities::FourCC get_stateFormat()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_GET_STATEFORMAT_OFFSET))(this);
		}

		::System::Void set_stateFormat(::UnityEngine::InputSystem::Utilities::FourCC value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::FourCC))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_SET_STATEFORMAT_OFFSET))(this, value);
		}

		::System::Int32 get_stateSizeInBytes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_GET_STATESIZEINBYTES_OFFSET))(this);
		}

		::System::Void set_stateSizeInBytes(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_SET_STATESIZEINBYTES_OFFSET))(this, value);
		}

		::System::String* get_extendsLayout()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_GET_EXTENDSLAYOUT_OFFSET))(this);
		}

		::System::Void set_extendsLayout(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_SET_EXTENDSLAYOUT_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Boolean> get_updateBeforeRender()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_GET_UPDATEBEFORERENDER_OFFSET))(this);
		}

		::System::Void set_updateBeforeRender(::System::Nullable_1<::System::Boolean> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_SET_UPDATEBEFORERENDER_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem> get_controls()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_GET_CONTROLS_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder AddControl(::System::String* name)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_ADDCONTROL_OFFSET))(this, name);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* WithName(::System::String* name)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_WITHNAME_OFFSET))(this, name);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* WithDisplayName(::System::String* displayName)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_WITHDISPLAYNAME_OFFSET))(this, displayName);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* WithFormat(::UnityEngine::InputSystem::Utilities::FourCC format)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::FourCC))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_WITHFORMAT_OFFSET))(this, format);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* WithFormat_1(::System::String* format)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_WITHFORMAT_1_OFFSET))(this, format);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* WithSizeInBytes(::System::Int32 sizeInBytes)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_WITHSIZEINBYTES_OFFSET))(this, sizeInBytes);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* Extend(::System::String* baseLayoutName)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_EXTEND_OFFSET))(this, baseLayoutName);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout* Build()
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_BUILD_OFFSET))(this);
		}
	};
}
