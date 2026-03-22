#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/Struct_2_3BFB14B0511B64BC_1.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F_1.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }
template <typename T1, typename T2> class Class_3_B60F6C2F126D2E2F_6;

#define CLASS_1_4E11CB6285B34236_METHOD_1_6F08D0A7BAF29E52_OFFSET UNITYSDK_OFFSET(0x8DD7490)
#define CLASS_1_4E11CB6285B34236_METHOD_1_7B5CF29097D2700A_OFFSET UNITYSDK_OFFSET(0x8DD7980)
#define CLASS_1_4E11CB6285B34236_METHOD_1_992AB14A95AC92D4_OFFSET UNITYSDK_OFFSET(0x8DD7690)
#define CLASS_1_4E11CB6285B34236_METHOD_1_B5B34D9A2F211E59_OFFSET UNITYSDK_OFFSET(0x8DD7A60)
#define CLASS_1_4E11CB6285B34236_METHOD_1_DB11C736C0498425_OFFSET UNITYSDK_OFFSET(0x8DD78E0)

inline static constexpr unsigned int Class_1_4E11CB6285B34236_TypeDefinitionIndex = 56158;

class Class_1_4E11CB6285B34236 : public ::System::Object
{
public:
	static ::Foundation::Unreal::FTransform3D Method_1_6F08D0A7BAF29E52(::UnityEngine::Camera* a1, ::System::Boolean a2)
	{
		return ((::Foundation::Unreal::FTransform3D(*)(::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4E11CB6285B34236_METHOD_1_6F08D0A7BAF29E52_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_DB11C736C0498425(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4E11CB6285B34236_METHOD_1_DB11C736C0498425_OFFSET))(a1);
	}

	static ::System::Single Method_1_7B5CF29097D2700A(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4E11CB6285B34236_METHOD_1_7B5CF29097D2700A_OFFSET))(a1);
	}

	static ::Foundation::Unreal::FTransform3D Method_1_992AB14A95AC92D4(::UnityEngine::Transform* a1, ::System::Boolean a2)
	{
		return ((::Foundation::Unreal::FTransform3D(*)(::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4E11CB6285B34236_METHOD_1_992AB14A95AC92D4_OFFSET))(a1, a2);
	}

	static ::Class_3_B60F6C2F126D2E2F_6<::Struct_2_FC595D1A561D8C6F_1, ::Struct_2_3BFB14B0511B64BC_1>* Method_1_B5B34D9A2F211E59()
	{
		return ((::Class_3_B60F6C2F126D2E2F_6<::Struct_2_FC595D1A561D8C6F_1, ::Struct_2_3BFB14B0511B64BC_1>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4E11CB6285B34236_METHOD_1_B5B34D9A2F211E59_OFFSET))();
	}
};
