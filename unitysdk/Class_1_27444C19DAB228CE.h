#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/DeviceType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class ConfigUIAdapt; }
namespace MoleMole { class DeviceAdaptData; }
namespace MoleMole { class DevicePhysicalData; }
namespace MoleMole { class DevicePhysicalPadingData; }
namespace MoleMole { class GlobalPaddingData; }
namespace MoleMole { class UIAdaptData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Camera; }

#define CLASS_1_27444C19DAB228CE_METHOD_1_00188D2AAFE2BA67_1_OFFSET UNITYSDK_OFFSET(0xE79F590)
#define CLASS_1_27444C19DAB228CE_METHOD_1_00188D2AAFE2BA67_OFFSET UNITYSDK_OFFSET(0xE79EA90)
#define CLASS_1_27444C19DAB228CE_METHOD_1_08FE6E442A19B10E_OFFSET UNITYSDK_OFFSET(0xE79EE20)
#define CLASS_1_27444C19DAB228CE_METHOD_1_093EA43DB4ED711A_OFFSET UNITYSDK_OFFSET(0xE79E710)
#define CLASS_1_27444C19DAB228CE_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0xE79E370)
#define CLASS_1_27444C19DAB228CE_METHOD_1_0CF0AE650FF902FE_OFFSET UNITYSDK_OFFSET(0xE79E2C0)
#define CLASS_1_27444C19DAB228CE_METHOD_1_109EF81A334C39C5_OFFSET UNITYSDK_OFFSET(0xE79E810)
#define CLASS_1_27444C19DAB228CE_METHOD_1_4E30EAD831ABAB2E_OFFSET UNITYSDK_OFFSET(0xE79DD40)
#define CLASS_1_27444C19DAB228CE_METHOD_1_6308C232BF6C33AE_1_OFFSET UNITYSDK_OFFSET(0xE79F870)
#define CLASS_1_27444C19DAB228CE_METHOD_1_6308C232BF6C33AE_OFFSET UNITYSDK_OFFSET(0xE79F1F0)
#define CLASS_1_27444C19DAB228CE_METHOD_1_6A5C7F4041315572_OFFSET UNITYSDK_OFFSET(0xE79E5E0)
#define CLASS_1_27444C19DAB228CE_METHOD_1_756E91E89470983A_OFFSET UNITYSDK_OFFSET(0xE79E0D0)
#define CLASS_1_27444C19DAB228CE_METHOD_1_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0xE79DC30)
#define CLASS_1_27444C19DAB228CE_METHOD_1_9B2F2CA4FB78E460_OFFSET UNITYSDK_OFFSET(0xE79EF70)
#define CLASS_1_27444C19DAB228CE_METHOD_1_C3C7E67889636990_OFFSET UNITYSDK_OFFSET(0xE79F630)
#define CLASS_1_27444C19DAB228CE_METHOD_1_DB582908E72E2A0B_OFFSET UNITYSDK_OFFSET(0xE79F400)
#define CLASS_1_27444C19DAB228CE_METHOD_1_DDF8EF8195CF828E_OFFSET UNITYSDK_OFFSET(0xE79DE40)
#define CLASS_1_27444C19DAB228CE_METHOD_1_EC51DBC6B6B2501B_OFFSET UNITYSDK_OFFSET(0xE79ED80)
#define CLASS_1_27444C19DAB228CE_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0xE79E9E0)
#define CLASS_1_27444C19DAB228CE_METHOD_1_FD6241192D0CA10E_OFFSET UNITYSDK_OFFSET(0xE79EB30)
#define CLASS_1_27444C19DAB228CE_METHOD_1_FDA309F11AC8B46B_OFFSET UNITYSDK_OFFSET(0xE79F2E0)
#define CLASS_1_27444C19DAB228CE__CCTOR_OFFSET UNITYSDK_OFFSET(0xE79DBD0)

inline static constexpr unsigned int Class_1_27444C19DAB228CE_TypeDefinitionIndex = 49838;

class Class_1_27444C19DAB228CE : public ::System::Object
{
public:
	static ::MoleMole::ConfigUIAdapt** StaticGet_Field_1_0()
	{
		return (::MoleMole::ConfigUIAdapt**)Il2CppClass::FromTypeDefinitionIndex(Class_1_27444C19DAB228CE_TypeDefinitionIndex)->GetStaticField(0x2B2E0);
	}
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_27444C19DAB228CE_TypeDefinitionIndex)->GetStaticField(0x2B2E8);
	}
	static ::System::Single* StaticGet_Field_1_5()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_27444C19DAB228CE_TypeDefinitionIndex)->GetStaticField(0x9960);
	}
	static ::System::Boolean* StaticGet_Field_1_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_27444C19DAB228CE_TypeDefinitionIndex)->GetStaticField(0x9964);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_27444C19DAB228CE_TypeDefinitionIndex)->GetStaticField(0x9965);
	}
	static ::UnityEngine::DeviceType* StaticGet_Field_1_4()
	{
		return (::UnityEngine::DeviceType*)Il2CppClass::FromTypeDefinitionIndex(Class_1_27444C19DAB228CE_TypeDefinitionIndex)->GetStaticField(0x9968);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_83DA3EC57FF907F4_OFFSET))();
	}

	static ::MoleMole::UIAdaptData* Method_1_4E30EAD831ABAB2E(::System::String* a1, ::Enum_3_3EDF246633A325B0 a2)
	{
		return ((::MoleMole::UIAdaptData*(*)(::System::String*, ::Enum_3_3EDF246633A325B0))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_4E30EAD831ABAB2E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_756E91E89470983A(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_756E91E89470983A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::UnityEngine::DeviceType Method_1_6A5C7F4041315572(::System::Boolean a1)
	{
		return ((::UnityEngine::DeviceType(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_6A5C7F4041315572_OFFSET))(a1);
	}

	static ::UnityEngine::Vector2 Method_1_093EA43DB4ED711A(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_093EA43DB4ED711A_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::DevicePhysicalData* Method_1_109EF81A334C39C5(::System::String* a1)
	{
		return ((::MoleMole::DevicePhysicalData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_109EF81A334C39C5_OFFSET))(a1);
	}

	static ::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_F730968E2645E14B_OFFSET))();
	}

	static ::UnityEngine::Vector2 Method_1_00188D2AAFE2BA67(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_00188D2AAFE2BA67_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0CF0AE650FF902FE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_0CF0AE650FF902FE_OFFSET))(a1, a2);
	}

	static ::MoleMole::DevicePhysicalPadingData* Method_1_FD6241192D0CA10E(::System::String* a1)
	{
		return ((::MoleMole::DevicePhysicalPadingData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_FD6241192D0CA10E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_EC51DBC6B6B2501B(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_EC51DBC6B6B2501B_OFFSET))(a1);
	}

	static ::System::String* Method_1_08FE6E442A19B10E(::System::Boolean a1)
	{
		return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_08FE6E442A19B10E_OFFSET))(a1);
	}

	static ::MoleMole::UIAdaptData* Method_1_DDF8EF8195CF828E(::System::String* a1, ::Enum_3_3EDF246633A325B0 a2)
	{
		return ((::MoleMole::UIAdaptData*(*)(::System::String*, ::Enum_3_3EDF246633A325B0))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_DDF8EF8195CF828E_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_9B2F2CA4FB78E460(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Single(*)(::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_9B2F2CA4FB78E460_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_FDA309F11AC8B46B(::UnityEngine::Camera* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_FDA309F11AC8B46B_OFFSET))(a1, a2);
	}

	static ::MoleMole::GlobalPaddingData* Method_1_DB582908E72E2A0B(::System::String* a1)
	{
		return ((::MoleMole::GlobalPaddingData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_DB582908E72E2A0B_OFFSET))(a1);
	}

	static ::UnityEngine::Vector2 Method_1_00188D2AAFE2BA67_1(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_00188D2AAFE2BA67_1_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_6308C232BF6C33AE(::System::Single a1, ::System::Single a2, ::System::Int32 a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_6308C232BF6C33AE_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::DeviceAdaptData* Method_1_C3C7E67889636990(::System::String* a1)
	{
		return ((::MoleMole::DeviceAdaptData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_C3C7E67889636990_OFFSET))(a1);
	}

	static ::System::Single Method_1_6308C232BF6C33AE_1(::System::Single a1, ::System::Single a2, ::System::Int32 a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_METHOD_1_6308C232BF6C33AE_1_OFFSET))(a1, a2, a3);
	}
};
