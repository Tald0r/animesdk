#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class SceneConfigRuntimeData; }
namespace System { class String; }

#define CLASS_1_D8BFDD89527FF013_METHOD_1_632FAD039AC542B1_OFFSET UNITYSDK_OFFSET(0x91AFCD0)

inline static constexpr unsigned int Class_1_D8BFDD89527FF013_TypeDefinitionIndex = 78197;

class Class_1_D8BFDD89527FF013 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0

	static ::System::Boolean Method_1_632FAD039AC542B1(::Foundation::AssetPath a1, ::MoleMole::Config::SceneConfigRuntimeData*& a2)
	{
		return ((::System::Boolean(*)(::Foundation::AssetPath, ::MoleMole::Config::SceneConfigRuntimeData*&))((::PBYTE)hIl2Cpp + CLASS_1_D8BFDD89527FF013_METHOD_1_632FAD039AC542B1_OFFSET))(a1, a2);
	}
};
