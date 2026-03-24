#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace SimpleJSON { class JSONNode; }

#define CLASS_1_DDE621197E7DBF92_METHOD_1_99FBD9FAA534B229_OFFSET UNITYSDK_OFFSET(0x6851C00)
#define CLASS_1_DDE621197E7DBF92_METHOD_1_9C12A00315CAECCE_OFFSET UNITYSDK_OFFSET(0x6851910)
#define CLASS_1_DDE621197E7DBF92_METHOD_1_BC1A59B25F257882_OFFSET UNITYSDK_OFFSET(0x68519D0)
#define CLASS_1_DDE621197E7DBF92__CTOR_OFFSET UNITYSDK_OFFSET(0x6851EF0)

inline static constexpr unsigned int Class_1_DDE621197E7DBF92_TypeDefinitionIndex = 61943;

class Class_1_DDE621197E7DBF92 : public ::System::Object
{
public:
	::System::Single Field_1_1; // 0x10
	::System::Single Field_1_2; // 0x14
	::UnityEngine::Vector2 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDE621197E7DBF92__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_9C12A00315CAECCE(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_DDE621197E7DBF92_METHOD_1_9C12A00315CAECCE_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_1_99FBD9FAA534B229()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDE621197E7DBF92_METHOD_1_99FBD9FAA534B229_OFFSET))(this);
	}

	::System::Boolean Method_1_BC1A59B25F257882(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_DDE621197E7DBF92_METHOD_1_BC1A59B25F257882_OFFSET))(this, a1);
	}
};
