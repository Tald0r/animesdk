#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7F3F4476896DB547.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/MoleMole/StaticBoolMaterialModifier.h"
#include "unitysdk/MoleMole/StaticColorMaterialModifier.h"
#include "unitysdk/MoleMole/StaticFloatMaterialModifier.h"
#include "unitysdk/MoleMole/StaticKeywordFloatMaterialModifier.h"
#include "unitysdk/MoleMole/StaticKeywordMaterialModifier.h"
#include "unitysdk/MoleMole/StaticTextureMaterialModifier.h"
#include "unitysdk/MoleMole/StaticVectorMaterialModifier.h"
#include "unitysdk/System/Object.h"

class Class_1_9610394F487FC231;
namespace MoleMole { class MonoRenderHandler; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Material; }

#define CLASS_1_8019128448F0E9D5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x667ACF0)
#define CLASS_1_8019128448F0E9D5_METHOD_1_0E2FF1BE1BCE0438_OFFSET UNITYSDK_OFFSET(0x667A890)
#define CLASS_1_8019128448F0E9D5_METHOD_1_109E01AC0BAE1BA6_OFFSET UNITYSDK_OFFSET(0x667AB10)
#define CLASS_1_8019128448F0E9D5_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x667BB30)
#define CLASS_1_8019128448F0E9D5_METHOD_1_189C865264480324_OFFSET UNITYSDK_OFFSET(0x667B8B0)
#define CLASS_1_8019128448F0E9D5_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x667D410)
#define CLASS_1_8019128448F0E9D5_METHOD_1_2F8E1DE3FD9E4C4C_OFFSET UNITYSDK_OFFSET(0x667D3A0)
#define CLASS_1_8019128448F0E9D5_METHOD_1_3B0D01A30F6EC764_OFFSET UNITYSDK_OFFSET(0x667AEA0)
#define CLASS_1_8019128448F0E9D5_METHOD_1_492494FED1C414CA_OFFSET UNITYSDK_OFFSET(0x667D4D0)
#define CLASS_1_8019128448F0E9D5_METHOD_1_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x667AF60)
#define CLASS_1_8019128448F0E9D5_METHOD_1_58DA4787E3C0110A_OFFSET UNITYSDK_OFFSET(0x667D210)
#define CLASS_1_8019128448F0E9D5_METHOD_1_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x667BB70)
#define CLASS_1_8019128448F0E9D5_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x667B940)
#define CLASS_1_8019128448F0E9D5_METHOD_1_8EF612C022DFE2F3_OFFSET UNITYSDK_OFFSET(0x667AC10)
#define CLASS_1_8019128448F0E9D5_METHOD_1_9809C99861C91775_OFFSET UNITYSDK_OFFSET(0x667B5B0)
#define CLASS_1_8019128448F0E9D5_METHOD_1_9D2248899D8F6628_OFFSET UNITYSDK_OFFSET(0x667AD50)
#define CLASS_1_8019128448F0E9D5_METHOD_1_B41F28A7F09A5BFB_OFFSET UNITYSDK_OFFSET(0x667D170)
#define CLASS_1_8019128448F0E9D5_METHOD_1_BC3F978D255D4574_OFFSET UNITYSDK_OFFSET(0x667AA10)
#define CLASS_1_8019128448F0E9D5_METHOD_1_C051368DFA557B97_OFFSET UNITYSDK_OFFSET(0x667AA80)
#define CLASS_1_8019128448F0E9D5_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x667BB60)
#define CLASS_1_8019128448F0E9D5_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x667BB50)
#define CLASS_1_8019128448F0E9D5_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x667A830)
#define CLASS_1_8019128448F0E9D5_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x667AC90)
#define CLASS_1_8019128448F0E9D5_METHOD_1_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x667DB50)
#define CLASS_1_8019128448F0E9D5_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x667A7D0)
#define CLASS_1_8019128448F0E9D5_METHOD_1_E14DB86E62467B4B_OFFSET UNITYSDK_OFFSET(0x667A990)
#define CLASS_1_8019128448F0E9D5_METHOD_1_E16846F6D6EF4D1B_OFFSET UNITYSDK_OFFSET(0x667B7F0)
#define CLASS_1_8019128448F0E9D5_METHOD_1_EFF7E77068B02617_OFFSET UNITYSDK_OFFSET(0x667A910)
#define CLASS_1_8019128448F0E9D5_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x667D390)
#define CLASS_1_8019128448F0E9D5_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x667DC10)
#define CLASS_1_8019128448F0E9D5_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x667B930)
#define CLASS_1_8019128448F0E9D5_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x667DBB0)
#define CLASS_1_8019128448F0E9D5_METHOD_1_FC3E433B11C3840B_OFFSET UNITYSDK_OFFSET(0x667AB90)
#define CLASS_1_8019128448F0E9D5__CTOR_OFFSET UNITYSDK_OFFSET(0x667A770)

inline static constexpr unsigned int Class_1_8019128448F0E9D5_TypeDefinitionIndex = 40547;

class Class_1_8019128448F0E9D5 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8019128448F0E9D5_TypeDefinitionIndex)->GetStaticField(0xF240);
	}
	::Il2CppArray<::UnityEngine::Material*>* Field_1_7; // 0x10
	::Class_1_9610394F487FC231* Field_1_3; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_10; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_9; // 0x28
	::MoleMole::Config::MaterialPropertyType Field_1_11; // 0x30
	::System::Boolean Field_1_2; // 0x34
	::System::Boolean Field_1_5; // 0x35
	::System::Boolean Field_1_8; // 0x36
	::System::Boolean Field_1_6; // 0x37
	::System::Boolean Field_1_4; // 0x38
	::System::Int32 Field_1_1; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_1_0E2FF1BE1BCE0438(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticFloatMaterialModifier& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_0E2FF1BE1BCE0438_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_EFF7E77068B02617(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticTextureMaterialModifier& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_EFF7E77068B02617_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_E14DB86E62467B4B(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticVectorMaterialModifier& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_E14DB86E62467B4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BC3F978D255D4574(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticVectorMaterialModifier& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_BC3F978D255D4574_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C051368DFA557B97(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticColorMaterialModifier& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_C051368DFA557B97_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_109E01AC0BAE1BA6(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticBoolMaterialModifier& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_109E01AC0BAE1BA6_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_FC3E433B11C3840B(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticKeywordMaterialModifier& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticKeywordMaterialModifier&))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_FC3E433B11C3840B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8EF612C022DFE2F3(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticKeywordFloatMaterialModifier& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_8EF612C022DFE2F3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_DISPOSE_OFFSET))(this);
	}

	::System::Int32 Method_1_9D2248899D8F6628(::MoleMole::Config::MaterialPropertyType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_9D2248899D8F6628_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B0D01A30F6EC764(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_3B0D01A30F6EC764_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9809C99861C91775()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_9809C99861C91775_OFFSET))(this);
	}

	::System::Void Method_1_E16846F6D6EF4D1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_E16846F6D6EF4D1B_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_82E992240300FB30_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_1_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Int32 Method_1_58DA4787E3C0110A(::System::Collections::Generic::HashSet_1<::Class_1_8019128448F0E9D5*>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::Class_1_8019128448F0E9D5*>*))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_58DA4787E3C0110A_OFFSET))(this, a1);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_1_B41F28A7F09A5BFB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_B41F28A7F09A5BFB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_1_189C865264480324()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_189C865264480324_OFFSET))(this);
	}

	::System::Void Method_1_492494FED1C414CA(::Class_1_9610394F487FC231* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_492494FED1C414CA_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_CA373AA1C7054598_3_OFFSET))(this);
	}

	::Class_1_9610394F487FC231* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_9610394F487FC231*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::MoleMole::MonoRenderHandler* Method_1_2F8E1DE3FD9E4C4C()
	{
		return ((::MoleMole::MonoRenderHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_2F8E1DE3FD9E4C4C_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8019128448F0E9D5_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}
};
