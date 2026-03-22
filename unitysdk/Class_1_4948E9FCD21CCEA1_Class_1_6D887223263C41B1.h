#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_4948E9FCD21CCEA1_Class_1_174E2793BBEC2575;
namespace MoleMole { class ConfigTimelineDataExtra; }

#define CLASS_1_4948E9FCD21CCEA1_CLASS_1_6D887223263C41B1_METHOD_1_C6F8B924956AEC28_OFFSET UNITYSDK_OFFSET(0xC567AC0)
#define CLASS_1_4948E9FCD21CCEA1_CLASS_1_6D887223263C41B1__CTOR_OFFSET UNITYSDK_OFFSET(0xC567AB0)

inline static constexpr unsigned int Class_1_4948E9FCD21CCEA1_Class_1_6D887223263C41B1_TypeDefinitionIndex = 40585;

class Class_1_4948E9FCD21CCEA1_Class_1_6D887223263C41B1 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_0; // 0x10
	::Class_1_4948E9FCD21CCEA1_Class_1_174E2793BBEC2575* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4948E9FCD21CCEA1_CLASS_1_6D887223263C41B1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C6F8B924956AEC28(::MoleMole::ConfigTimelineDataExtra* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigTimelineDataExtra*))((::PBYTE)hIl2Cpp + CLASS_1_4948E9FCD21CCEA1_CLASS_1_6D887223263C41B1_METHOD_1_C6F8B924956AEC28_OFFSET))(this, a1);
	}
};
