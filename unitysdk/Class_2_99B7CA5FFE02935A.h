#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AkPositionArray;
class Class_2_99B7CA5FFE02935A_Class_1_F3B8E87D5DC46ECB;
class Class_3_6124F7AF16B30AB1;
class Class_3_A5AF8EA2F7094EFB;
class Class_3_F35B080B137ECC46;
namespace MoleMole { class MonoEffectPluginAudio; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_99B7CA5FFE02935A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7396150)
#define CLASS_2_99B7CA5FFE02935A_METHOD_2_200AEF5411F95CB6_OFFSET UNITYSDK_OFFSET(0x7396FB0)
#define CLASS_2_99B7CA5FFE02935A_METHOD_2_39764272A7CF6D73_OFFSET UNITYSDK_OFFSET(0x739A6F0)
#define CLASS_2_99B7CA5FFE02935A_METHOD_2_4D9E1AC61B60D577_OFFSET UNITYSDK_OFFSET(0x7396310)
#define CLASS_2_99B7CA5FFE02935A_METHOD_2_6051EF65108B24F2_OFFSET UNITYSDK_OFFSET(0x739A3B0)
#define CLASS_2_99B7CA5FFE02935A_METHOD_2_6CCC5FF90ECCCBD6_OFFSET UNITYSDK_OFFSET(0x73986A0)
#define CLASS_2_99B7CA5FFE02935A_METHOD_2_AD72C9334C9544B2_OFFSET UNITYSDK_OFFSET(0x7396740)
#define CLASS_2_99B7CA5FFE02935A_METHOD_2_FEA88D9B491A4DF7_OFFSET UNITYSDK_OFFSET(0x7399400)
#define CLASS_2_99B7CA5FFE02935A_ONCREATE_OFFSET UNITYSDK_OFFSET(0x7395FA0)
#define CLASS_2_99B7CA5FFE02935A_UPDATE_OFFSET UNITYSDK_OFFSET(0x7396260)
#define CLASS_2_99B7CA5FFE02935A__CTOR_OFFSET UNITYSDK_OFFSET(0x73966F0)

inline static constexpr unsigned int Class_2_99B7CA5FFE02935A_TypeDefinitionIndex = 68847;

class Class_2_99B7CA5FFE02935A : public ::Foundation::SingletonDisposable_1<::Class_2_99B7CA5FFE02935A*>
{
public:
	// static const ::System::Int32 Field_2_3 = 0xA; // 0x0
	// static const ::System::Int32 Field_2_4 = 0x40; // 0x0
	::AkPositionArray* Field_2_5; // 0x10
	::System::Collections::Generic::HashSet_1<::Class_3_A5AF8EA2F7094EFB*>* Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_99B7CA5FFE02935A_Class_1_F3B8E87D5DC46ECB*>* Field_2_0; // 0x20
	::System::Int32 Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99B7CA5FFE02935A__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99B7CA5FFE02935A_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99B7CA5FFE02935A_DISPOSE_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_99B7CA5FFE02935A_UPDATE_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_AD72C9334C9544B2(::Class_3_A5AF8EA2F7094EFB* a1, ::MoleMole::MonoEffectPluginAudio* a2, ::UnityEngine::Transform* a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_3_A5AF8EA2F7094EFB*, ::MoleMole::MonoEffectPluginAudio*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_99B7CA5FFE02935A_METHOD_2_AD72C9334C9544B2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_200AEF5411F95CB6(::Class_3_A5AF8EA2F7094EFB* a1, ::Class_3_6124F7AF16B30AB1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A5AF8EA2F7094EFB*, ::Class_3_6124F7AF16B30AB1*))((::PBYTE)hIl2Cpp + CLASS_2_99B7CA5FFE02935A_METHOD_2_200AEF5411F95CB6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6CCC5FF90ECCCBD6(::Class_3_A5AF8EA2F7094EFB* a1, ::Class_3_6124F7AF16B30AB1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A5AF8EA2F7094EFB*, ::Class_3_6124F7AF16B30AB1*))((::PBYTE)hIl2Cpp + CLASS_2_99B7CA5FFE02935A_METHOD_2_6CCC5FF90ECCCBD6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6051EF65108B24F2(::Class_3_A5AF8EA2F7094EFB* a1, ::Class_3_6124F7AF16B30AB1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A5AF8EA2F7094EFB*, ::Class_3_6124F7AF16B30AB1*))((::PBYTE)hIl2Cpp + CLASS_2_99B7CA5FFE02935A_METHOD_2_6051EF65108B24F2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_39764272A7CF6D73(::Class_3_A5AF8EA2F7094EFB* a1, ::Class_3_F35B080B137ECC46* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A5AF8EA2F7094EFB*, ::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_2_99B7CA5FFE02935A_METHOD_2_39764272A7CF6D73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FEA88D9B491A4DF7(::Class_2_99B7CA5FFE02935A_Class_1_F3B8E87D5DC46ECB* a1, ::Class_3_F35B080B137ECC46* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_99B7CA5FFE02935A_Class_1_F3B8E87D5DC46ECB*, ::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_2_99B7CA5FFE02935A_METHOD_2_FEA88D9B491A4DF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4D9E1AC61B60D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99B7CA5FFE02935A_METHOD_2_4D9E1AC61B60D577_OFFSET))(this);
	}
};
