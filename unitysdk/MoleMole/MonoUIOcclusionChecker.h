#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOUIOCCLUSIONCHECKER_METHOD_5_05215549ACBE2115_OFFSET UNITYSDK_OFFSET(0xD43E700)
#define MOLEMOLE_MONOUIOCCLUSIONCHECKER_METHOD_5_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0xD43EF90)
#define MOLEMOLE_MONOUIOCCLUSIONCHECKER_METHOD_5_5D52379F6FF16D24_OFFSET UNITYSDK_OFFSET(0xD43F150)
#define MOLEMOLE_MONOUIOCCLUSIONCHECKER_METHOD_5_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xD43E260)
#define MOLEMOLE_MONOUIOCCLUSIONCHECKER_METHOD_5_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0xD43E4B0)
#define MOLEMOLE_MONOUIOCCLUSIONCHECKER_METHOD_5_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xD43F0D0)
#define MOLEMOLE_MONOUIOCCLUSIONCHECKER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD43E1F0)
#define MOLEMOLE_MONOUIOCCLUSIONCHECKER_SETENTITY_OFFSET UNITYSDK_OFFSET(0xD43E310)
#define MOLEMOLE_MONOUIOCCLUSIONCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0xD43E690)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIOcclusionChecker_TypeDefinitionIndex = 67172;

	class MonoUIOcclusionChecker : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 Field_5_0; // 0x18
		::System::Single Field_5_1; // 0x1C
		::UnityEngine::Transform* Field_5_2; // 0x20
		::Foundation::Coroutine::CoroutineHandle Field_5_3; // 0x28
		::System::Boolean Field_5_4; // 0x2C
		::System::Single Field_5_5; // 0x30
		::Il2CppArray<::UnityEngine::RaycastHit>* Field_5_6; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIOCCLUSIONCHECKER__CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIOCCLUSIONCHECKER_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetEntity(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIOCCLUSIONCHECKER_SETENTITY_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_05215549ACBE2115(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIOCCLUSIONCHECKER_METHOD_5_05215549ACBE2115_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_0DF420E95D6252BE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIOCCLUSIONCHECKER_METHOD_5_0DF420E95D6252BE_OFFSET))(this);
		}

		::System::Void Method_5_E41B6A823556FEEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIOCCLUSIONCHECKER_METHOD_5_E41B6A823556FEEA_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_5_5D52379F6FF16D24()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIOCCLUSIONCHECKER_METHOD_5_5D52379F6FF16D24_OFFSET))(this);
		}

		::System::Void Method_5_C638E91FC0D3A13A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIOCCLUSIONCHECKER_METHOD_5_C638E91FC0D3A13A_OFFSET))(this);
		}

		::System::Void Method_5_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIOCCLUSIONCHECKER_METHOD_5_89D1F247B9D324EE_OFFSET))(this);
		}
	};
}
