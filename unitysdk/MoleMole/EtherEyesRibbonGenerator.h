#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_ETHEREYESRIBBONGENERATOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x75674E0)
#define MOLEMOLE_ETHEREYESRIBBONGENERATOR_METHOD_5_8894E534FED3129C_OFFSET UNITYSDK_OFFSET(0x7567470)
#define MOLEMOLE_ETHEREYESRIBBONGENERATOR_METHOD_5_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0x7567E90)
#define MOLEMOLE_ETHEREYESRIBBONGENERATOR_METHOD_5_D29C2F8DD9EA7988_OFFSET UNITYSDK_OFFSET(0x75677E0)
#define MOLEMOLE_ETHEREYESRIBBONGENERATOR_METHOD_5_F0F8DE036FE283F6_OFFSET UNITYSDK_OFFSET(0x7569B40)
#define MOLEMOLE_ETHEREYESRIBBONGENERATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x7567310)
#define MOLEMOLE_ETHEREYESRIBBONGENERATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x7567760)
#define MOLEMOLE_ETHEREYESRIBBONGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x7569B00)

namespace MoleMole
{
	inline static constexpr unsigned int EtherEyesRibbonGenerator_TypeDefinitionIndex = 52783;

	class EtherEyesRibbonGenerator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* startPoint; // 0x18
		::Il2CppArray<::UnityEngine::Transform*>* endPoints; // 0x20
		::System::Single stripWidth; // 0x28
		::System::Single tilePerUnit; // 0x2C
		::System::Single uvOffset; // 0x30
		::System::Single desiredSegmentLength; // 0x34
		::System::Single midAlphaBand; // 0x38
		::System::Single midAlpha; // 0x3C
		::UnityEngine::MeshFilter* Field_5_8; // 0x40
		::UnityEngine::Mesh* Field_5_9; // 0x48
		::UnityEngine::Vector3 Field_5_10; // 0x50
		::Il2CppArray<::UnityEngine::Vector3>* Field_5_11; // 0x60
		::Il2CppArray<::System::Int32>* Field_5_12; // 0x68
		::System::Single Field_5_13; // 0x70
		::System::Single Field_5_14; // 0x74
		::System::Boolean Field_5_15; // 0x78
		::System::Single Field_5_16; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESRIBBONGENERATOR__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESRIBBONGENERATOR_ONENABLE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESRIBBONGENERATOR_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESRIBBONGENERATOR_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_F0F8DE036FE283F6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESRIBBONGENERATOR_METHOD_5_F0F8DE036FE283F6_OFFSET))(this);
		}

		::System::Void Method_5_CD9F3CEFB366C27A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESRIBBONGENERATOR_METHOD_5_CD9F3CEFB366C27A_OFFSET))(this);
		}

		::System::Boolean Method_5_D29C2F8DD9EA7988()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESRIBBONGENERATOR_METHOD_5_D29C2F8DD9EA7988_OFFSET))(this);
		}

		::System::Void Method_5_8894E534FED3129C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESRIBBONGENERATOR_METHOD_5_8894E534FED3129C_OFFSET))(this);
		}
	};
}
