#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EditorUpdateScript.h"

namespace UnityEngine { class GameObject; }

#define EDITORBINDINGTRANSFORM_EDITORUPDATE_OFFSET UNITYSDK_OFFSET(0x1B068F90)
#define EDITORBINDINGTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B069250)

inline static constexpr unsigned int EditorBindingTransform_TypeDefinitionIndex = 81712;

class EditorBindingTransform : public ::EditorUpdateScript
{
public:
	::UnityEngine::GameObject* goSrc; // 0x18
	::UnityEngine::GameObject* goDst; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORBINDINGTRANSFORM__CTOR_OFFSET))(this);
	}

	::System::Void EditorUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORBINDINGTRANSFORM_EDITORUPDATE_OFFSET))(this);
	}
};
