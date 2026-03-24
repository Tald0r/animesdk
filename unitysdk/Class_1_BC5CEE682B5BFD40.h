#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C5CFFBB29190E266.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_C3003B9DB9D9A93F;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_1_BC5CEE682B5BFD40_METHOD_1_484E8044D54C6029_OFFSET UNITYSDK_OFFSET(0x70F32F0)
#define CLASS_1_BC5CEE682B5BFD40_METHOD_1_68A1551CB88D9B84_OFFSET UNITYSDK_OFFSET(0x70F3190)
#define CLASS_1_BC5CEE682B5BFD40_METHOD_1_F217BE2A5D5BE012_OFFSET UNITYSDK_OFFSET(0x70F2DE0)

inline static constexpr unsigned int Class_1_BC5CEE682B5BFD40_TypeDefinitionIndex = 77822;

class Class_1_BC5CEE682B5BFD40 : public ::System::Object
{
public:
	static ::MoleMole::Battle::Entity* Method_1_F217BE2A5D5BE012(::Class_3_C3003B9DB9D9A93F* a1)
	{
		return ((::MoleMole::Battle::Entity*(*)(::Class_3_C3003B9DB9D9A93F*))((::PBYTE)hIl2Cpp + CLASS_1_BC5CEE682B5BFD40_METHOD_1_F217BE2A5D5BE012_OFFSET))(a1);
	}

	static ::System::Void Method_1_68A1551CB88D9B84(::MoleMole::Battle::Entity* a1, ::System::UInt32& a2, ::System::UInt32& a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_BC5CEE682B5BFD40_METHOD_1_68A1551CB88D9B84_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_484E8044D54C6029(::MoleMole::EntityHandle a1, ::Enum_3_C5CFFBB29190E266 a2, ::UnityEngine::Vector3 a3, ::System::String* a4)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::EntityHandle, ::Enum_3_C5CFFBB29190E266, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BC5CEE682B5BFD40_METHOD_1_484E8044D54C6029_OFFSET))(a1, a2, a3, a4);
	}
};
