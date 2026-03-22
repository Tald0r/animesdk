#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_1_019870FE224FBE5A;
class Class_1_8F6F43710765B0C1_Class_1_4E271783D45CB8C7;

#define CLASS_1_BC62748FA820C591_CLASS_1_0839D37CB96616D1_METHOD_1_D8299432719B3C68_OFFSET UNITYSDK_OFFSET(0xCA1F650)
#define CLASS_1_BC62748FA820C591_CLASS_1_0839D37CB96616D1__CTOR_OFFSET UNITYSDK_OFFSET(0xCA1F640)

inline static constexpr unsigned int Class_1_BC62748FA820C591_Class_1_0839D37CB96616D1_TypeDefinitionIndex = 65059;

class Class_1_BC62748FA820C591_Class_1_0839D37CB96616D1 : public ::System::Object
{
public:
	::Class_1_019870FE224FBE5A* Field_1_1; // 0x10
	::Class_1_8F6F43710765B0C1_Class_1_4E271783D45CB8C7* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC62748FA820C591_CLASS_1_0839D37CB96616D1__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_D8299432719B3C68(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_BC62748FA820C591_CLASS_1_0839D37CB96616D1_METHOD_1_D8299432719B3C68_OFFSET))(this, a1);
	}
};
