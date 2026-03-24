#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vehicle/VehicleModelNodes.h"
#include "unitysdk/Struct_2_A5F3F97A94B01E4C_1.h"
#include "unitysdk/Struct_2_FBA4730A60751401_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Vehicle { class VehicleConfig; }
namespace UnityEngine { class Transform; }

#define CLASS_1_C2C12FB940333BE5_METHOD_1_04014FBC38E74574_OFFSET UNITYSDK_OFFSET(0x845D620)
#define CLASS_1_C2C12FB940333BE5_METHOD_1_111CDF05B81A85A9_OFFSET UNITYSDK_OFFSET(0x845EA20)
#define CLASS_1_C2C12FB940333BE5_METHOD_1_6A2F2D5792FF699E_OFFSET UNITYSDK_OFFSET(0x845D940)
#define CLASS_1_C2C12FB940333BE5_METHOD_1_6EC1FA3111947FB3_OFFSET UNITYSDK_OFFSET(0x845D8A0)
#define CLASS_1_C2C12FB940333BE5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x845D5F0)
#define CLASS_1_C2C12FB940333BE5__CTOR_OFFSET UNITYSDK_OFFSET(0x845D5D0)

inline static constexpr unsigned int Class_1_C2C12FB940333BE5_TypeDefinitionIndex = 50172;

class Class_1_C2C12FB940333BE5 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_3; // 0x10
	::UnityEngine::Transform* Field_1_2; // 0x18
	::MoleMole::Vehicle::VehicleConfig* Field_1_1; // 0x20
	::System::Single Field_1_0; // 0x28

	::System::Void _ctor(::MoleMole::Vehicle::VehicleConfig* a1, ::MoleMole::Vehicle::VehicleModelNodes& a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vehicle::VehicleConfig*, ::MoleMole::Vehicle::VehicleModelNodes&))((::PBYTE)hIl2Cpp + CLASS_1_C2C12FB940333BE5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::Class_1_C2C12FB940333BE5* a1, ::MoleMole::Vehicle::VehicleConfig* a2, ::MoleMole::Vehicle::VehicleModelNodes& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C2C12FB940333BE5*, ::MoleMole::Vehicle::VehicleConfig*, ::MoleMole::Vehicle::VehicleModelNodes&))((::PBYTE)hIl2Cpp + CLASS_1_C2C12FB940333BE5__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_04014FBC38E74574(::System::Single a1, ::UnityEngine::Quaternion a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_C2C12FB940333BE5_METHOD_1_04014FBC38E74574_OFFSET))(this, a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_6EC1FA3111947FB3(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C2C12FB940333BE5_METHOD_1_6EC1FA3111947FB3_OFFSET))(a1);
	}

	::Struct_2_FBA4730A60751401_1 Method_1_6A2F2D5792FF699E(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::Struct_2_A5F3F97A94B01E4C_1& a3, ::System::Single a4)
	{
		return ((::Struct_2_FBA4730A60751401_1(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::Struct_2_A5F3F97A94B01E4C_1&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C2C12FB940333BE5_METHOD_1_6A2F2D5792FF699E_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_111CDF05B81A85A9(::UnityEngine::Transform* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_C2C12FB940333BE5_METHOD_1_111CDF05B81A85A9_OFFSET))(this, a1);
	}
};
