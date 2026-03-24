#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/RendererFader.h"

namespace MoleMole { class MonoEffect; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define MOLEMOLE_MATKEYWORDFADERBYINDEX_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6EA0730)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_GET_MAT_OFFSET UNITYSDK_OFFSET(0x6EA0180)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_GET_MONOEFFECT_OFFSET UNITYSDK_OFFSET(0x6EA0170)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x6EA0B20)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x6EA0B90)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_3C24DDABFEBD866B_OFFSET UNITYSDK_OFFSET(0x6EA0520)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x6EA0BD0)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_562D61043B940F1C_OFFSET UNITYSDK_OFFSET(0x6EA0D70)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_89A39BE6C99B55E5_OFFSET UNITYSDK_OFFSET(0x6EA03B0)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_B64EFE451F0AFF59_OFFSET UNITYSDK_OFFSET(0x6EA05F0)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6EA0800)
#define MOLEMOLE_MATKEYWORDFADERBYINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x6EA03A0)

namespace MoleMole
{
	inline static constexpr unsigned int MatKeyWordFaderByIndex_TypeDefinitionIndex = 65216;

	class MatKeyWordFaderByIndex : public ::MoleMole::RendererFader
	{
	public:
		::MoleMole::MonoEffect* monoEffect; // 0x28
		::System::String* keyWord; // 0x30
		::System::Boolean lastVal; // 0x38
		::System::Boolean oriVal; // 0x39
		::System::Boolean _hasInsMat; // 0x3A
		::System::Int32 _matInstanceId; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX__CTOR_OFFSET))(this);
		}

		::MoleMole::MonoEffect* get_MonoEffect()
		{
			return ((::MoleMole::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_GET_MONOEFFECT_OFFSET))(this);
		}

		::UnityEngine::Material* get_mat()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_GET_MAT_OFFSET))(this);
		}

		::System::Void Method_2_89A39BE6C99B55E5(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_89A39BE6C99B55E5_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_3C24DDABFEBD866B(::UnityEngine::MaterialPropertyBlock*& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_3C24DDABFEBD866B_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_B64EFE451F0AFF59(::UnityEngine::MaterialPropertyBlock*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_B64EFE451F0AFF59_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_DISPOSE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_TOSTRING_OFFSET))(this);
		}

		::System::Void Method_2_050E70FEDB783306(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
		}

		::System::String* Method_2_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_128774387667156B_OFFSET))(this);
		}

		::System::Void Method_2_508D4DD02D3DB74E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
		}

		::System::Void Method_2_562D61043B940F1C(::MoleMole::MonoEffect* a1, ::System::Int32 a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffect*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MATKEYWORDFADERBYINDEX_METHOD_2_562D61043B940F1C_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
