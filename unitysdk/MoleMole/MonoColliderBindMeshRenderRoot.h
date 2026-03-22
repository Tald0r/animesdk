#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_492;
namespace MoleMole { class BindMeshRenderGroup; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_MONOCOLLIDERBINDMESHRENDERROOT_AWAKE_OFFSET UNITYSDK_OFFSET(0x8F8CEC0)
#define MOLEMOLE_MONOCOLLIDERBINDMESHRENDERROOT_GETBINDINFO_OFFSET UNITYSDK_OFFSET(0x8F8D2D0)
#define MOLEMOLE_MONOCOLLIDERBINDMESHRENDERROOT_METHOD_5_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x8F8CF30)
#define MOLEMOLE_MONOCOLLIDERBINDMESHRENDERROOT_METHOD_5_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0x8F8D530)
#define MOLEMOLE_MONOCOLLIDERBINDMESHRENDERROOT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x8F8D4C0)
#define MOLEMOLE_MONOCOLLIDERBINDMESHRENDERROOT__CTOR_OFFSET UNITYSDK_OFFSET(0x8F8D670)

namespace MoleMole
{
	inline static constexpr unsigned int MonoColliderBindMeshRenderRoot_TypeDefinitionIndex = 50365;

	class MonoColliderBindMeshRenderRoot : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::BindMeshRenderGroup*>* BindConfig; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::BindMeshRenderGroup*>* Field_5_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCOLLIDERBINDMESHRENDERROOT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCOLLIDERBINDMESHRENDERROOT_AWAKE_OFFSET))(this);
		}

		::System::Boolean GetBindInfo(::UnityEngine::Collider* a1, ::Class_0_16E4307DCC419505_492*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*, ::Class_0_16E4307DCC419505_492*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCOLLIDERBINDMESHRENDERROOT_GETBINDINFO_OFFSET))(this, a1, a2);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCOLLIDERBINDMESHRENDERROOT_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_7206DC8F66A4D2A8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCOLLIDERBINDMESHRENDERROOT_METHOD_5_7206DC8F66A4D2A8_OFFSET))(this);
		}

		::System::Void Method_5_704FAC4600717444()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCOLLIDERBINDMESHRENDERROOT_METHOD_5_704FAC4600717444_OFFSET))(this);
		}
	};
}
