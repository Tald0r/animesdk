#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR___C_METHOD_1_2FD66F2652C64405_OFFSET UNITYSDK_OFFSET(0x8CA5220)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8CA51D0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8CA5210)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialBehavior___c_TypeDefinitionIndex = 60518;

	class RuntimeMaterialBehavior___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Renderer*, ::System::Boolean>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::UnityEngine::Renderer*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialBehavior___c_TypeDefinitionIndex)->GetStaticField(0x2DF90);
		}
		static ::MoleMole::Timeline::RuntimeMaterialBehavior___c** StaticGet___9()
		{
			return (::MoleMole::Timeline::RuntimeMaterialBehavior___c**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialBehavior___c_TypeDefinitionIndex)->GetStaticField(0x2DF98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR___C__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_2FD66F2652C64405(::UnityEngine::Renderer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR___C_METHOD_1_2FD66F2652C64405_OFFSET))(this, a1);
		}
	};
}
