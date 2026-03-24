#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_6DA7B27D0F38CD4F;
class Class_1_FE9ECF98C0BD94FC;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MONOINTERACTINFO_GET_INTERACTSINFO_OFFSET UNITYSDK_OFFSET(0x9A32A70)
#define MONOINTERACTINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9A329D0)
#define MONOINTERACTINFO_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x9A32A60)
#define MONOINTERACTINFO_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x9A32A40)
#define MONOINTERACTINFO_SETINTERACTCONFIG_OFFSET UNITYSDK_OFFSET(0x9A32A80)
#define MONOINTERACTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9A32F40)

inline static constexpr unsigned int MonoInteractInfo_TypeDefinitionIndex = 46757;

class MonoInteractInfo : public ::UnityEngine::MonoBehaviour
{
public:
	::System::String* _scale; // 0x18
	::Class_1_6DA7B27D0F38CD4F* _interactConfig; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_FE9ECF98C0BD94FC*>* _interactsInfo; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINTERACTINFO__CTOR_OFFSET))(this);
	}

	::System::String* get_Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINTERACTINFO_GET_NAME_OFFSET))(this);
	}

	::System::Int32 get_Shape()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINTERACTINFO_GET_SHAPE_OFFSET))(this);
	}

	::System::String* get_Scale()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINTERACTINFO_GET_SCALE_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_FE9ECF98C0BD94FC*>* get_InteractsInfo()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_FE9ECF98C0BD94FC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINTERACTINFO_GET_INTERACTSINFO_OFFSET))(this);
	}

	::System::Void SetInteractConfig(::MoleMole::Battle::Entity* owner, ::Class_1_6DA7B27D0F38CD4F* interactConfig)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_1_6DA7B27D0F38CD4F*))((::PBYTE)hIl2Cpp + MONOINTERACTINFO_SETINTERACTCONFIG_OFFSET))(this, owner, interactConfig);
	}
};
