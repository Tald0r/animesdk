#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RendererFader.h"

namespace MoleMole { class MonoEffect; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_DISPOSE_OFFSET UNITYSDK_OFFSET(0x82E1590)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_GET_MAT_OFFSET UNITYSDK_OFFSET(0x82E1080)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_GET_MONOEFFECT_OFFSET UNITYSDK_OFFSET(0x82E1070)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x82E1AE0)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_METHOD_2_3C081D06DA6B1B22_OFFSET UNITYSDK_OFFSET(0x82E13D0)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x82E1B20)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x82E1A70)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_METHOD_2_B703CACAF2B5AD56_OFFSET UNITYSDK_OFFSET(0x82E1470)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_METHOD_2_D53907E5392D9A4E_OFFSET UNITYSDK_OFFSET(0x82E12A0)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_METHOD_2_EE4A13D362FE5804_OFFSET UNITYSDK_OFFSET(0x82E1950)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x82E1660)
#define MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x82E1940)

namespace MoleMole
{
	inline static constexpr unsigned int MatKeyPropValueFaderByIndex_TypeDefinitionIndex = 67484;

	class MatKeyPropValueFaderByIndex : public ::MoleMole::RendererFader
	{
	public:
		::MoleMole::MonoEffect* monoEffect; // 0x28
		::System::Single lastVal; // 0x30
		::System::Single oriVal; // 0x34
		::System::Boolean _hasInsMat; // 0x38
		::System::Int32 _materialInstanceId; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX__CTOR_OFFSET))(this);
		}

		::MoleMole::MonoEffect* get_MonoEffect()
		{
			return ((::MoleMole::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_GET_MONOEFFECT_OFFSET))(this);
		}

		::UnityEngine::Material* get_mat()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_GET_MAT_OFFSET))(this);
		}

		::System::Void Method_2_D53907E5392D9A4E(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_METHOD_2_D53907E5392D9A4E_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_3C081D06DA6B1B22(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_METHOD_2_3C081D06DA6B1B22_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_B703CACAF2B5AD56(::UnityEngine::MaterialPropertyBlock*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_METHOD_2_B703CACAF2B5AD56_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_DISPOSE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_TOSTRING_OFFSET))(this);
		}

		::System::Void Method_2_EE4A13D362FE5804(::MoleMole::MonoEffect* a1, ::System::Int32 a2, ::System::String* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffect*, ::System::Int32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_METHOD_2_EE4A13D362FE5804_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
		}

		::System::String* Method_2_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_METHOD_2_128774387667156B_OFFSET))(this);
		}

		::System::Void Method_2_508D4DD02D3DB74E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYPROPVALUEFADERBYINDEX_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
		}
	};
}
