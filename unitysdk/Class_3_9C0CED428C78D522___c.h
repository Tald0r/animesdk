#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F35B080B137ECC46;
class Class_3_F61947B841A40F75;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_9C0CED428C78D522___C_METHOD_1_ABFFB355FF266AF8_OFFSET UNITYSDK_OFFSET(0x15A99B90)
#define CLASS_3_9C0CED428C78D522___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A99B40)
#define CLASS_3_9C0CED428C78D522___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15A99B80)

inline static constexpr unsigned int Class_3_9C0CED428C78D522___c_TypeDefinitionIndex = 70787;

class Class_3_9C0CED428C78D522___c : public ::System::Object
{
public:
	static ::Class_3_9C0CED428C78D522___c** StaticGet___9()
	{
		return (::Class_3_9C0CED428C78D522___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_9C0CED428C78D522___c_TypeDefinitionIndex)->GetStaticField(0x32980);
	}
	static ::System::Action_2<::Class_3_F35B080B137ECC46*, ::Class_3_F61947B841A40F75*>** StaticGet___9__12_0()
	{
		return (::System::Action_2<::Class_3_F35B080B137ECC46*, ::Class_3_F61947B841A40F75*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_9C0CED428C78D522___c_TypeDefinitionIndex)->GetStaticField(0x32988);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_9C0CED428C78D522___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9C0CED428C78D522___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_ABFFB355FF266AF8(::Class_3_F35B080B137ECC46* a1, ::Class_3_F61947B841A40F75* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F35B080B137ECC46*, ::Class_3_F61947B841A40F75*))((::PBYTE)hIl2Cpp + CLASS_3_9C0CED428C78D522___C_METHOD_1_ABFFB355FF266AF8_OFFSET))(this, a1, a2);
	}
};
