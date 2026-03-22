#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_F2B17BA55377659F;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Object; }

#define CLASS_1_96164EDB43336CD8_CLASS_1_88D9188A38EF333D_METHOD_1_E93276A5A6DD84D5_OFFSET UNITYSDK_OFFSET(0x9FCEEA0)
#define CLASS_1_96164EDB43336CD8_CLASS_1_88D9188A38EF333D__CTOR_OFFSET UNITYSDK_OFFSET(0x9FCEE90)

inline static constexpr unsigned int Class_1_96164EDB43336CD8_Class_1_88D9188A38EF333D_TypeDefinitionIndex = 54573;

class Class_1_96164EDB43336CD8_Class_1_88D9188A38EF333D : public ::System::Object
{
public:
	::Class_1_F2B17BA55377659F* Field_1_1; // 0x10
	::System::Action_2<::Foundation::AssetRequestHandle, ::Class_1_F2B17BA55377659F*>* Field_1_0; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96164EDB43336CD8_CLASS_1_88D9188A38EF333D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E93276A5A6DD84D5(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_96164EDB43336CD8_CLASS_1_88D9188A38EF333D_METHOD_1_E93276A5A6DD84D5_OFFSET))(this, a1, a2);
	}
};
