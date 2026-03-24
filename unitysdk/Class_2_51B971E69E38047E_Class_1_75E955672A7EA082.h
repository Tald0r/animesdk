#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_3773F938AA2C6232;
class Class_1_EC682544DE1271C8;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_51B971E69E38047E_CLASS_1_75E955672A7EA082_METHOD_1_03256FDD530FE047_OFFSET UNITYSDK_OFFSET(0x9C86ED0)
#define CLASS_2_51B971E69E38047E_CLASS_1_75E955672A7EA082_METHOD_1_A5A961BFA03FE1C5_OFFSET UNITYSDK_OFFSET(0x9C86B50)
#define CLASS_2_51B971E69E38047E_CLASS_1_75E955672A7EA082_METHOD_1_B15E763C95CF0A5B_OFFSET UNITYSDK_OFFSET(0x9C86BE0)
#define CLASS_2_51B971E69E38047E_CLASS_1_75E955672A7EA082__CTOR_OFFSET UNITYSDK_OFFSET(0x9C86B40)

inline static constexpr unsigned int Class_2_51B971E69E38047E_Class_1_75E955672A7EA082_TypeDefinitionIndex = 55960;

class Class_2_51B971E69E38047E_Class_1_75E955672A7EA082 : public ::System::Object
{
public:
	::Class_1_3773F938AA2C6232* Field_1_0; // 0x10
	::System::Action_1<::Class_1_EC682544DE1271C8*>* Field_1_3; // 0x18
	::System::Action* Field_1_1; // 0x20
	::System::Int32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51B971E69E38047E_CLASS_1_75E955672A7EA082__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A5A961BFA03FE1C5(::Class_1_EC682544DE1271C8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EC682544DE1271C8*))((::PBYTE)hIl2Cpp + CLASS_2_51B971E69E38047E_CLASS_1_75E955672A7EA082_METHOD_1_A5A961BFA03FE1C5_OFFSET))(this, a1);
	}

	::System::Void Method_1_B15E763C95CF0A5B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51B971E69E38047E_CLASS_1_75E955672A7EA082_METHOD_1_B15E763C95CF0A5B_OFFSET))(this);
	}

	::System::Void Method_1_03256FDD530FE047(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_51B971E69E38047E_CLASS_1_75E955672A7EA082_METHOD_1_03256FDD530FE047_OFFSET))(this, a1, a2);
	}
};
