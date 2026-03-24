#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7F06DF54D0ABDFFD.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWindowController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_192C4D4325B9FB0B_METHOD_1_415A1F7476EC264C_OFFSET UNITYSDK_OFFSET(0x97684E0)
#define CLASS_1_192C4D4325B9FB0B_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x9768300)
#define CLASS_1_192C4D4325B9FB0B_METHOD_1_8235F327D6476D48_OFFSET UNITYSDK_OFFSET(0x97685D0)
#define CLASS_1_192C4D4325B9FB0B_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x97686E0)
#define CLASS_1_192C4D4325B9FB0B_METHOD_1_848FDD59AB054F3D_OFFSET UNITYSDK_OFFSET(0x97686F0)
#define CLASS_1_192C4D4325B9FB0B_METHOD_1_AEBB6B9FF3174063_OFFSET UNITYSDK_OFFSET(0x9768180)
#define CLASS_1_192C4D4325B9FB0B__CTOR_OFFSET UNITYSDK_OFFSET(0x97680B0)

inline static constexpr unsigned int Class_1_192C4D4325B9FB0B_TypeDefinitionIndex = 58977;

class Class_1_192C4D4325B9FB0B : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x20
	::System::Boolean Field_1_3; // 0x24

	::System::Void _ctor(::UnityEngine::GameObject* a1, ::Enum_3_7F06DF54D0ABDFFD a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Enum_3_7F06DF54D0ABDFFD))((::PBYTE)hIl2Cpp + CLASS_1_192C4D4325B9FB0B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AEBB6B9FF3174063(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_192C4D4325B9FB0B_METHOD_1_AEBB6B9FF3174063_OFFSET))(this, a1);
	}

	::System::Void Method_1_415A1F7476EC264C(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_192C4D4325B9FB0B_METHOD_1_415A1F7476EC264C_OFFSET))(this, a1);
	}

	::System::Void Method_1_8235F327D6476D48(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_192C4D4325B9FB0B_METHOD_1_8235F327D6476D48_OFFSET))(this, a1);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_192C4D4325B9FB0B_METHOD_1_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_192C4D4325B9FB0B_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_848FDD59AB054F3D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_192C4D4325B9FB0B_METHOD_1_848FDD59AB054F3D_OFFSET))(this, a1);
	}
};
