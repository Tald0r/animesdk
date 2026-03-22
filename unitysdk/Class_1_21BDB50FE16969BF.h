#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5B421F8FFABD4CA3_1.h"
#include "unitysdk/System/Object.h"

class Class_1_4AC26411646E4F6D;
class Class_1_87F855E9737731A7;
class Class_1_E2080EDAE017B1B1;
namespace MoleMole { class ClientSceneObjectStateLooperConfigBase; }
namespace MoleMole { class SceneObjectStateWidget; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_21BDB50FE16969BF_METHOD_1_8779A3F5AD742936_OFFSET UNITYSDK_OFFSET(0x8501300)
#define CLASS_1_21BDB50FE16969BF_METHOD_1_A8062509694DBE2B_OFFSET UNITYSDK_OFFSET(0x85014A0)
#define CLASS_1_21BDB50FE16969BF_METHOD_1_B1BC3F7510ACBE4A_OFFSET UNITYSDK_OFFSET(0x8501370)
#define CLASS_1_21BDB50FE16969BF_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x8501330)

inline static constexpr unsigned int Class_1_21BDB50FE16969BF_TypeDefinitionIndex = 73514;

class Class_1_21BDB50FE16969BF : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_21BDB50FE16969BF_TypeDefinitionIndex)->GetStaticField(0xDDB0);
	}

	static ::System::Void Method_1_8779A3F5AD742936(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_21BDB50FE16969BF_METHOD_1_8779A3F5AD742936_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_21BDB50FE16969BF_METHOD_1_F5599B7DA8E7E53C_OFFSET))();
	}

	static ::Class_1_4AC26411646E4F6D* Method_1_B1BC3F7510ACBE4A(::MoleMole::ClientSceneObjectStateLooperConfigBase* a1)
	{
		return ((::Class_1_4AC26411646E4F6D*(*)(::MoleMole::ClientSceneObjectStateLooperConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_21BDB50FE16969BF_METHOD_1_B1BC3F7510ACBE4A_OFFSET))(a1);
	}

	static ::Class_1_E2080EDAE017B1B1* Method_1_A8062509694DBE2B(::Class_1_87F855E9737731A7* a1, ::MoleMole::SceneObjectStateWidget* a2, ::System::Action_1<::Struct_2_5B421F8FFABD4CA3_1>* a3)
	{
		return ((::Class_1_E2080EDAE017B1B1*(*)(::Class_1_87F855E9737731A7*, ::MoleMole::SceneObjectStateWidget*, ::System::Action_1<::Struct_2_5B421F8FFABD4CA3_1>*))((::PBYTE)hIl2Cpp + CLASS_1_21BDB50FE16969BF_METHOD_1_A8062509694DBE2B_OFFSET))(a1, a2, a3);
	}
};
