#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/GuidePoint_AutoGenStrategy.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1CAC0F23A7272040;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class WeakReference_1; }

#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_F11ACB4C7C573C44_GET_ISINCAMERAVIEW_OFFSET UNITYSDK_OFFSET(0x97C11D0)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_F11ACB4C7C573C44_GET_SHOULDCONTINUE_OFFSET UNITYSDK_OFFSET(0x97C11C0)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_F11ACB4C7C573C44_ISBINDTOTHISENTITY_OFFSET UNITYSDK_OFFSET(0x97C1A90)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_F11ACB4C7C573C44_METHOD_1_11413EFC7DF5EB16_OFFSET UNITYSDK_OFFSET(0x97C16A0)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_F11ACB4C7C573C44_UPDATEINCAMERAVIEW_OFFSET UNITYSDK_OFFSET(0x97C11E0)
#define CLASS_1_534AF681CC2BD5FD_233_CLASS_1_F11ACB4C7C573C44__CTOR_OFFSET UNITYSDK_OFFSET(0x97C1B40)

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_233_Class_1_F11ACB4C7C573C44_TypeDefinitionIndex = 64004;

class Class_1_534AF681CC2BD5FD_233_Class_1_F11ACB4C7C573C44 : public ::System::Object
{
public:
	::MoleMole::Config::GuidePoint_AutoGenStrategy Field_1_2; // 0x10
	::System::String* Field_1_5; // 0x58
	::System::WeakReference_1<::Class_1_1CAC0F23A7272040*>* Field_1_3; // 0x60
	::System::Boolean Field_1_0; // 0x68
	::System::Boolean Field_1_1; // 0x69
	::System::Int32 Field_1_4; // 0x6C

	::System::Void _ctor(::Class_1_1CAC0F23A7272040* a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CAC0F23A7272040*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_F11ACB4C7C573C44__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean get_ShouldContinue()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_F11ACB4C7C573C44_GET_SHOULDCONTINUE_OFFSET))(this);
	}

	::System::Boolean get_IsInCameraView()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_F11ACB4C7C573C44_GET_ISINCAMERAVIEW_OFFSET))(this);
	}

	::System::Void UpdateInCameraView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_F11ACB4C7C573C44_UPDATEINCAMERAVIEW_OFFSET))(this);
	}

	::System::Boolean IsBindToThisEntity(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_F11ACB4C7C573C44_ISBINDTOTHISENTITY_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_11413EFC7DF5EB16(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_233_CLASS_1_F11ACB4C7C573C44_METHOD_1_11413EFC7DF5EB16_OFFSET))(this, a1);
	}
};
