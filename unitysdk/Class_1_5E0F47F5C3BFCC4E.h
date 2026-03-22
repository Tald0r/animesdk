#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_402DBB6FAC12574C;
namespace MoleMole { class MonoLayoutTween; }
namespace System { class Action; }
namespace UnityEngine { class Transform; }

#define CLASS_1_5E0F47F5C3BFCC4E_METHOD_1_00A5B7B05F47214A_OFFSET UNITYSDK_OFFSET(0xBC6D960)
#define CLASS_1_5E0F47F5C3BFCC4E_METHOD_1_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0xBC6DBC0)
#define CLASS_1_5E0F47F5C3BFCC4E_METHOD_1_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0xBC6D860)
#define CLASS_1_5E0F47F5C3BFCC4E_METHOD_1_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0xBC6DCA0)
#define CLASS_1_5E0F47F5C3BFCC4E_METHOD_1_DD1EE3A48E307831_1_OFFSET UNITYSDK_OFFSET(0xBC6DEC0)
#define CLASS_1_5E0F47F5C3BFCC4E_METHOD_1_DD1EE3A48E307831_OFFSET UNITYSDK_OFFSET(0xBC6DDE0)
#define CLASS_1_5E0F47F5C3BFCC4E_METHOD_1_E62B2038400C39B9_OFFSET UNITYSDK_OFFSET(0xBC6DAA0)
#define CLASS_1_5E0F47F5C3BFCC4E__CTOR_OFFSET UNITYSDK_OFFSET(0xBC6D8E0)

inline static constexpr unsigned int Class_1_5E0F47F5C3BFCC4E_TypeDefinitionIndex = 78097;

class Class_1_5E0F47F5C3BFCC4E : public ::System::Object
{
public:
	::MoleMole::MonoLayoutTween* Field_1_1; // 0x10
	::System::Action* Field_1_0; // 0x18

	::System::Void _ctor(::MoleMole::MonoLayoutTween* a1, ::Class_1_402DBB6FAC12574C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoLayoutTween*, ::Class_1_402DBB6FAC12574C*))((::PBYTE)hIl2Cpp + CLASS_1_5E0F47F5C3BFCC4E__CTOR_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Transform* Method_1_38B862BB2192EC08()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E0F47F5C3BFCC4E_METHOD_1_38B862BB2192EC08_OFFSET))(this);
	}

	::System::Void Method_1_00A5B7B05F47214A(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5E0F47F5C3BFCC4E_METHOD_1_00A5B7B05F47214A_OFFSET))(this, a1);
	}

	::System::Void Method_1_E62B2038400C39B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5E0F47F5C3BFCC4E_METHOD_1_E62B2038400C39B9_OFFSET))(this, a1);
	}

	::System::Void Method_1_30A2382C3FCC5386()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E0F47F5C3BFCC4E_METHOD_1_30A2382C3FCC5386_OFFSET))(this);
	}

	::System::Void Method_1_76CD9B9D1269FA90(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5E0F47F5C3BFCC4E_METHOD_1_76CD9B9D1269FA90_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DD1EE3A48E307831()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E0F47F5C3BFCC4E_METHOD_1_DD1EE3A48E307831_OFFSET))(this);
	}

	::System::Boolean Method_1_DD1EE3A48E307831_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E0F47F5C3BFCC4E_METHOD_1_DD1EE3A48E307831_1_OFFSET))(this);
	}
};
